	THUMB_FUNC_START sub_080E2720
sub_080E2720: @ 0x080E2720
	push {r4-r7,lr}
	mov r7, r8
	push {r7}
	sub sp, sp, #4
	add r6, r1, #0
	lsl r0, r0, #24
	lsr r0, r0, #24
	lsl r6, r6, #24
	ldr r1, _080E27A4  @ =gUnknown_03003E74
	lsr r6, r6, #26
	ldrh r1, [r1]
	add r6, r6, r1
	lsl r6, r6, #16
	lsr r6, r6, #16
	ldr r5, _080E27A8  @ =gRam
	mov r2, #150
	lsl r2, r2, #4
	add r1, r5, r2
	ldrh r1, [r1]
	ldr r3, _080E27AC  @ =0x00000964
	add r3, r3, r5
	mov r8, r3
	ldr r4, _080E27B0  @ =gUnknown_08176A58
	ldr r7, _080E27B4  @ =0x00000F92
	add r2, r5, r7
	add r2, r0, r2
	ldrb r3, [r2]
	lsl r3, r3, #1
	add r3, r3, r4
	mov r4, r8
	ldrh r2, [r4]
	ldrh r3, [r3]
	sub r2, r2, r3
	lsl r2, r2, #16
	lsr r2, r2, #16
	ldr r4, _080E27B8  @ =gUnknown_08176958
	add r7, r7, #240
	add r3, r5, r7
	add r0, r0, r3
	ldrb r0, [r0]
	add r4, r0, r4
	ldrb r3, [r4]
	ldr r4, _080E27BC  @ =gUnknown_0817695C
	add r0, r0, r4
	ldrb r0, [r0]
	ldr r4, _080E27C0  @ =0x00000969
	add r5, r5, r4
	mov r4, #0
	ldrsb r4, [r5, r4]
	orr r0, r0, r4
	lsl r0, r0, #8
	add r3, r3, r0
	lsl r3, r3, #16
	lsr r3, r3, #16
	mov r0, #2
	str r0, [sp]
	add r0, r6, #0
	bl sub_080C6368
	add sp, sp, #4
	pop {r3}
	mov r8, r3
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080E27A4:
	.4byte gUnknown_03003E74
_080E27A8:
	.4byte gRam
_080E27AC:
	.4byte 0x00000964
_080E27B0:
	.4byte gUnknown_08176A58
_080E27B4:
	.4byte 0x00000F92
_080E27B8:
	.4byte gUnknown_08176958
_080E27BC:
	.4byte gUnknown_0817695C
_080E27C0:
	.4byte 0x00000969
	THUMB_FUNC_END sub_080E2720

