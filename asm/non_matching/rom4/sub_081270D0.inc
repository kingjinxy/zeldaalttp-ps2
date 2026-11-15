	THUMB_FUNC_START sub_081270D0
sub_081270D0: @ 0x081270D0
	push {r4-r6,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r6, r4, #0
	ldr r5, _08127128  @ =gUnknown_03000050
	ldrh r1, [r5, #8]
	mov r0, #3
	and r0, r0, r1
	cmp r0, #0
	bne _081270EA
	add r0, r4, #0
	bl sub_08126800
_081270EA:
	ldr r0, _0812712C  @ =gUnknown_08180934
	add r0, r4, r0
	add r1, r5, #0
	add r1, r1, #48
	add r1, r4, r1
	ldrb r0, [r0]
	ldrb r1, [r1]
	cmp r0, r1
	bne _08127106
	add r0, r5, #0
	add r0, r0, #88
	add r0, r4, r0
	mov r1, #0
	strb r1, [r0]
_08127106:
	ldr r0, _08127130  @ =gUnknown_08180937
	add r0, r6, r0
	add r1, r5, #0
	add r1, r1, #72
	add r1, r6, r1
	ldrb r0, [r0]
	ldrb r1, [r1]
	cmp r0, r1
	bne _08127122
	add r0, r5, #0
	add r0, r0, #96
	add r0, r6, r0
	mov r1, #0
	strb r1, [r0]
_08127122:
	pop {r4-r6}
	pop {r0}
	bx r0
_08127128:
	.4byte gUnknown_03000050
_0812712C:
	.4byte gUnknown_08180934
_08127130:
	.4byte gUnknown_08180937
	THUMB_FUNC_END sub_081270D0

