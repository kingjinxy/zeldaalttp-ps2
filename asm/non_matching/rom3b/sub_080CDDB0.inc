	THUMB_FUNC_START sub_080CDDB0
sub_080CDDB0: @ 0x080CDDB0
	push {r4-r6,lr}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r1, _080CDE18  @ =gUnknown_03003E74
	ldrh r5, [r1]
	ldr r4, _080CDE1C  @ =gRam
	ldr r2, _080CDE20  @ =0x0000122C
	add r1, r4, r2
	add r1, r0, r1
	ldrb r1, [r1]
	ldr r3, _080CDE24  @ =0x00000952
	add r2, r4, r3
	ldrb r2, [r2]
	sub r1, r1, r2
	lsl r1, r1, #16
	lsr r1, r1, #16
	ldr r6, _080CDE28  @ =0x0000120E
	add r2, r4, r6
	add r2, r0, r2
	ldrb r2, [r2]
	ldr r6, _080CDE2C  @ =0x00000958
	add r3, r4, r6
	ldrb r3, [r3]
	sub r2, r2, r3
	lsl r2, r2, #16
	lsr r2, r2, #16
	ldr r6, _080CDE30  @ =0x0000131C
	add r3, r4, r6
	add r0, r0, r3
	ldrb r3, [r0]
	ldr r6, _080CDE34  @ =0x00001122
	add r0, r4, r6
	add r0, r3, r0
	ldr r6, _080CDE38  @ =0x00000D94
	add r4, r4, r6
	add r3, r3, r4
	ldrb r0, [r0]
	ldrb r3, [r3]
	orr r3, r3, r0
	lsl r3, r3, #8
	mov r0, #202
	orr r3, r3, r0
	mov r0, #2
	str r0, [sp]
	add r0, r5, #0
	bl sub_080C6368
	add sp, sp, #4
	pop {r4-r6}
	pop {r0}
	bx r0
_080CDE18:
	.4byte gUnknown_03003E74
_080CDE1C:
	.4byte gRam
_080CDE20:
	.4byte 0x0000122C
_080CDE24:
	.4byte 0x00000952
_080CDE28:
	.4byte 0x0000120E
_080CDE2C:
	.4byte 0x00000958
_080CDE30:
	.4byte 0x0000131C
_080CDE34:
	.4byte 0x00001122
_080CDE38:
	.4byte 0x00000D94
	THUMB_FUNC_END sub_080CDDB0

