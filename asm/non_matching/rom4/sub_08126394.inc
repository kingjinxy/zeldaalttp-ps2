	THUMB_FUNC_START sub_08126394
sub_08126394: @ 0x08126394
	push {r4,r5,lr}
	lsl r0, r0, #24
	lsr r2, r0, #24
	add r4, r2, #0
	ldr r3, _0812640C  @ =gUnknown_03000050
	ldrh r1, [r3, #8]
	mov r0, #31
	and r0, r0, r1
	cmp r0, #0
	bne _081263CC
	add r1, r3, #0
	add r1, r1, #88
	add r1, r2, r1
	ldr r0, _08126410  @ =gUnknown_08180728
	add r0, r2, r0
	ldrb r0, [r0]
	ldrb r5, [r1]
	add r0, r0, r5
	strb r0, [r1]
	add r1, r3, #0
	add r1, r1, #96
	add r1, r2, r1
	ldr r0, _08126414  @ =gUnknown_0818072B
	add r0, r2, r0
	ldrb r0, [r0]
	ldrb r5, [r1]
	add r0, r0, r5
	strb r0, [r1]
_081263CC:
	ldr r0, _08126418  @ =gUnknown_081807C8
	add r0, r2, r0
	add r1, r3, #0
	add r1, r1, #48
	add r1, r2, r1
	ldrb r0, [r0]
	ldrb r1, [r1]
	cmp r0, r1
	bne _081263E8
	add r0, r3, #0
	add r0, r0, #88
	add r0, r2, r0
	mov r1, #0
	strb r1, [r0]
_081263E8:
	ldr r0, _0812641C  @ =gUnknown_081807CB
	add r0, r4, r0
	add r1, r3, #0
	add r1, r1, #72
	add r1, r4, r1
	ldrb r0, [r0]
	ldrb r1, [r1]
	cmp r0, r1
	bne _08126404
	add r0, r3, #0
	add r0, r0, #96
	add r0, r4, r0
	mov r1, #0
	strb r1, [r0]
_08126404:
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0812640C:
	.4byte gUnknown_03000050
_08126410:
	.4byte gUnknown_08180728
_08126414:
	.4byte gUnknown_0818072B
_08126418:
	.4byte gUnknown_081807C8
_0812641C:
	.4byte gUnknown_081807CB
	THUMB_FUNC_END sub_08126394

