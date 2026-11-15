	THUMB_FUNC_START sub_080B90CC
sub_080B90CC: @ 0x080B90CC
	push {r4-r7,lr}
	sub sp, sp, #4
	ldr r4, _080B913C  @ =gRam
	ldr r1, _080B9140  @ =0x00000996
	add r0, r4, r1
	ldrb r1, [r0]
	mov r0, #7
	and r0, r0, r1
	cmp r0, #0
	bne _080B90F8
	bl sub_08133620
	ldr r1, _080B9144  @ =0x00000CF8
	add r0, r4, r1
	ldrh r0, [r0]
	cmp r0, #0
	bne _080B90F8
	ldr r0, _080B9148  @ =0x000009AD
	add r1, r4, r0
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
_080B90F8:
	ldr r1, _080B914C  @ =gUnknown_03003E74
	mov r0, #0
	strh r0, [r1]
	mov r5, #0
	ldr r7, _080B9150  @ =gUnknown_0817099C
	add r6, r1, #0
_080B9104:
	lsl r0, r5, #1
	add r0, r0, r7
	ldrh r2, [r0]
	lsl r2, r2, #16
	lsr r1, r2, #16
	ldrh r0, [r6]
	lsr r2, r2, #24
	add r3, r5, #1
	lsl r3, r3, #1
	add r3, r3, r7
	ldrh r3, [r3]
	mov r4, #2
	str r4, [sp]
	bl sub_080C6368
	ldrh r0, [r6]
	add r0, r0, #1
	strh r0, [r6]
	add r0, r5, #2
	lsl r0, r0, #24
	lsr r5, r0, #24
	cmp r5, #7
	bls _080B9104
	add sp, sp, #4
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080B913C:
	.4byte gRam
_080B9140:
	.4byte 0x00000996
_080B9144:
	.4byte 0x00000CF8
_080B9148:
	.4byte 0x000009AD
_080B914C:
	.4byte gUnknown_03003E74
_080B9150:
	.4byte gUnknown_0817099C
	THUMB_FUNC_END sub_080B90CC

