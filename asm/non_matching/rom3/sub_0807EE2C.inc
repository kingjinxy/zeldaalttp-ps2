	THUMB_FUNC_START sub_0807EE2C
sub_0807EE2C: @ 0x0807EE2C
	push {r4-r6,lr}
	mov r6, r8
	push {r6}
	ldr r4, _0807EE84  @ =gRam
	ldr r1, _0807EE88  @ =0x00000964
	add r0, r4, r1
	ldrh r0, [r0]
	lsl r2, r0, #16
	asr r0, r2, #16
	cmp r0, #11
	ble _0807EE74
	ldr r0, _0807EE8C  @ =0x00000B08
	add r5, r4, r0
	ldrh r1, [r5]
	mov r8, r1
	mov r1, #8
	mov r0, r8
	orr r0, r0, r1
	strh r0, [r5]
	mov r0, #151
	lsl r0, r0, #4
	add r4, r4, r0
	mov r1, #0
	ldrsh r6, [r4, r1]
	ldr r1, _0807EE90  @ =gUnknown_08167778
	asr r0, r2, #17
	add r0, r0, #6
	lsl r0, r0, #1
	add r0, r0, r1
	ldrh r0, [r0]
	strh r0, [r4]
	bl sub_08080428
	strh r6, [r4]
	mov r0, r8
	strh r0, [r5]
_0807EE74:
	bl sub_0807ECA8
	pop {r3}
	mov r8, r3
	pop {r4-r6}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0807EE84:
	.4byte gRam
_0807EE88:
	.4byte 0x00000964
_0807EE8C:
	.4byte 0x00000B08
_0807EE90:
	.4byte gUnknown_08167778
	THUMB_FUNC_END sub_0807EE2C

