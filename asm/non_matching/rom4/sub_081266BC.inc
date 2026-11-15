	THUMB_FUNC_START sub_081266BC
sub_081266BC: @ 0x081266BC
	push {r4,lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r1, _08126728  @ =gUnknown_03000050
	mov r12, r1
	mov r3, r12
	add r3, r3, #48
	add r3, r0, r3
	ldr r1, _0812672C  @ =gUnknown_08180900
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
	ldr r1, _08126730  @ =gUnknown_08180906
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
	ldr r1, _08126734  @ =gUnknown_0818090C
	add r1, r0, r1
	ldrb r1, [r1]
	strb r1, [r2]
	mov r2, r12
	add r2, r2, #96
	add r2, r0, r2
	ldr r1, _08126738  @ =gUnknown_0818090F
	add r1, r0, r1
	ldrb r1, [r1]
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
_08126728:
	.4byte gUnknown_03000050
_0812672C:
	.4byte gUnknown_08180900
_08126730:
	.4byte gUnknown_08180906
_08126734:
	.4byte gUnknown_0818090C
_08126738:
	.4byte gUnknown_0818090F
	THUMB_FUNC_END sub_081266BC

