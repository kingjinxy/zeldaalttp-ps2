	THUMB_FUNC_START sub_0806ED60
sub_0806ED60: @ 0x0806ED60
	push {r4,r5,lr}
	ldr r4, _0806EDA4  @ =gRam
	ldr r0, _0806EDA8  @ =0x00000A4C
	add r5, r4, r0
	ldrh r0, [r5]
	cmp r0, #5
	bne _0806ED9C
	bl sub_0806FE5C
	ldr r1, _0806EDAC  @ =0x000009AD
	add r3, r4, r1
	mov r1, #0
	mov r2, #0
	strh r1, [r5]
	ldr r5, _0806EDB0  @ =0x000009E8
	add r0, r4, r5
	strh r1, [r0]
	add r5, r5, #214
	add r0, r4, r5
	strh r1, [r0]
	strb r2, [r3]
	mov r3, #188
	lsl r3, r3, #4
	add r0, r4, r3
	strh r1, [r0]
	ldr r5, _0806EDB4  @ =0x00000BBF
	add r0, r4, r5
	strb r2, [r0]
	bl sub_0808B1FC
_0806ED9C:
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0806EDA4:
	.4byte gRam
_0806EDA8:
	.4byte 0x00000A4C
_0806EDAC:
	.4byte 0x000009AD
_0806EDB0:
	.4byte 0x000009E8
_0806EDB4:
	.4byte 0x00000BBF
	THUMB_FUNC_END sub_0806ED60

