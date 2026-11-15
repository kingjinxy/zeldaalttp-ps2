	THUMB_FUNC_START sub_08070A80
sub_08070A80: @ 0x08070A80
	push {r4,lr}
	ldr r1, _08070AB8  @ =gRam
	ldr r2, _08070ABC  @ =0x00000A4C
	add r0, r1, r2
	mov r3, #0
	mov r2, #0
	strh r2, [r0]
	ldr r4, _08070AC0  @ =0x000009E8
	add r0, r1, r4
	strh r2, [r0]
	add r4, r4, #214
	add r0, r1, r4
	strh r2, [r0]
	ldr r4, _08070AC4  @ =0x000009AD
	add r0, r1, r4
	strb r3, [r0]
	mov r4, #188
	lsl r4, r4, #4
	add r0, r1, r4
	strh r2, [r0]
	ldr r0, _08070AC8  @ =0x00000BBF
	add r1, r1, r0
	strb r3, [r1]
	bl sub_0808B1FC
	pop {r4}
	pop {r0}
	bx r0
_08070AB8:
	.4byte gRam
_08070ABC:
	.4byte 0x00000A4C
_08070AC0:
	.4byte 0x000009E8
_08070AC4:
	.4byte 0x000009AD
_08070AC8:
	.4byte 0x00000BBF
	THUMB_FUNC_END sub_08070A80

