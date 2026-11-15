	THUMB_FUNC_START sub_0806DB20
sub_0806DB20: @ 0x0806DB20
	push {r4,lr}
	ldr r3, _0806DB78  @ =gRam
	ldr r1, _0806DB7C  @ =0x00000CFA
	add r0, r3, r1
	ldr r2, _0806DB80  @ =0x00000CF8
	add r1, r3, r2
	ldrh r2, [r0]
	ldrh r0, [r1]
	orr r0, r0, r2
	cmp r0, #0
	bne _0806DB72
	ldr r0, _0806DB84  @ =0x00000A4C
	add r4, r3, r0
	ldrh r0, [r4]
	cmp r0, #5
	bne _0806DB72
	ldr r1, _0806DB88  @ =0x00000B0C
	add r0, r3, r1
	ldrh r2, [r0]
	cmp r2, #0
	bne _0806DB72
	mov r1, #0
	strh r2, [r4]
	ldr r4, _0806DB8C  @ =0x000009E8
	add r0, r3, r4
	strh r2, [r0]
	add r4, r4, #214
	add r0, r3, r4
	strh r2, [r0]
	ldr r4, _0806DB90  @ =0x000009AD
	add r0, r3, r4
	strb r1, [r0]
	mov r4, #188
	lsl r4, r4, #4
	add r0, r3, r4
	strh r2, [r0]
	ldr r2, _0806DB94  @ =0x00000BBF
	add r0, r3, r2
	strb r1, [r0]
	bl sub_0808B1FC
_0806DB72:
	pop {r4}
	pop {r0}
	bx r0
_0806DB78:
	.4byte gRam
_0806DB7C:
	.4byte 0x00000CFA
_0806DB80:
	.4byte 0x00000CF8
_0806DB84:
	.4byte 0x00000A4C
_0806DB88:
	.4byte 0x00000B0C
_0806DB8C:
	.4byte 0x000009E8
_0806DB90:
	.4byte 0x000009AD
_0806DB94:
	.4byte 0x00000BBF
	THUMB_FUNC_END sub_0806DB20

