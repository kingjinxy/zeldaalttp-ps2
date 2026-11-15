	THUMB_FUNC_START sub_0812630C
sub_0812630C: @ 0x0812630C
	push {r4,lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r1, _08126380  @ =gUnknown_03000050
	mov r12, r1
	mov r3, r12
	add r3, r3, #48
	add r3, r0, r3
	ldr r1, _08126384  @ =gUnknown_081807A4
	lsl r4, r0, #1
	add r1, r4, r1
	ldrh r2, [r1]
	strb r2, [r3]
	mov r1, r12
	add r1, r1, #56
	add r1, r0, r1
	lsr r2, r2, #8
	strb r2, [r1]
	mov r3, r12
	add r3, r3, #72
	add r3, r0, r3
	ldr r1, _08126388  @ =gUnknown_081807AA
	add r4, r4, r1
	ldrh r2, [r4]
	strb r2, [r3]
	mov r1, r12
	add r1, r1, #80
	add r1, r0, r1
	lsr r2, r2, #8
	strb r2, [r1]
	mov r2, r12
	add r2, r2, #88
	add r2, r0, r2
	ldr r1, _0812638C  @ =gUnknown_08180728
	add r1, r0, r1
	ldrb r1, [r1]
	ldrb r3, [r2]
	add r1, r1, r3
	strb r1, [r2]
	mov r2, r12
	add r2, r2, #96
	add r2, r0, r2
	ldr r1, _08126390  @ =gUnknown_0818072B
	add r1, r0, r1
	ldrb r1, [r1]
	ldrb r3, [r2]
	add r1, r1, r3
	strb r1, [r2]
	mov r1, r12
	add r1, r1, #16
	add r0, r0, r1
	ldrb r1, [r0]
	add r1, r1, #1
	strb r1, [r0]
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08126380:
	.4byte gUnknown_03000050
_08126384:
	.4byte gUnknown_081807A4
_08126388:
	.4byte gUnknown_081807AA
_0812638C:
	.4byte gUnknown_08180728
_08126390:
	.4byte gUnknown_0818072B
	THUMB_FUNC_END sub_0812630C

