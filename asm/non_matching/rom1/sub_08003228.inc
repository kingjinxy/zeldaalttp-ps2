	.syntax unified
	THUMB_FUNC_START sub_08003228
sub_08003228: @ 0X08003228
	ldr r0, [r5, #104]
	lsrs r0, r0, #32
	ldr r0, [r5, #104]
	lsrs r0, r0, #32
	ldr r0, [r5, #104]
	lsrs r0, r0, #32
	.4byte gUnknown_0813EDC0+0x44
	.4byte gUnknown_0813EE38+0x104
	str r2, [sp, #416]
	lsrs r3, r2, #32
	str r3, [sp, #240]
	lsrs r3, r2, #32
	add r5, pc, #768
	lsrs r0, r0, #32
_08003248:
	str r4, [sp, #944]
	lsrs r3, r2, #32
_0800324C:
	ldr r1, [sp, #416]
	lsrs r2, r0, #1
_08003250:
	.4byte gUnknown_0813FBC4+0x19c
	ldrh r0, [r0, #12]
	lsrs r2, r0, #1
	.4byte gUnknown_0813FE60+0x24
	.4byte gUnknown_0813FE60+0x24
	.4byte gUnknown_0813FE60+0x24
	.4byte gUnknown_0813FBC4+0x78
	adds r4, #232
	lsrs r0, r0, #32
	add r6, sp, #256
	lsrs r0, r0, #32
	ldrh r4, [r1, #18]
	lsrs r2, r0, #1
	add r6, sp, #256
	lsrs r0, r0, #32
_08003278:
	adds r4, #232
	lsrs r0, r0, #32
	ldrh r4, [r6, #26]
	lsrs r2, r0, #1
	str r5, [sp, #560]
	lsrs r3, r2, #32
	str r6, [sp, #432]
	lsrs r3, r2, #32
	ldmia r5, {r2, r5}
	lsrs r3, r2, #32
	ldmia r5, {r4, r5, r7}
	lsrs r3, r2, #32
	ldmia r6!, {r5}
	lsrs r3, r2, #32
	ldmia r6, {r2, r3, r4, r5, r6}
	lsrs r3, r2, #32
	lsrs r4, r3, #5
	lsrs r4, r2, #32
	ldmia r6, {r5, r6, r7}
	lsrs r3, r2, #32
	add r6, sp, #256
	lsrs r0, r0, #32
	add r6, sp, #256
	lsrs r0, r0, #32
	add r6, sp, #256
	lsrs r0, r0, #32
	add r6, sp, #256
	lsrs r0, r0, #32
_080032B0:
	lsrs r0, r7, #6
	lsrs r4, r2, #32
	stmia r3!, {r2, r3, r4, r6}
	lsrs r3, r2, #32
	movs r0, r0
	movs r0, r0
	add r5, pc, #768
	lsrs r0, r0, #32
	add r5, pc, #768
	lsrs r0, r0, #32
	add r6, sp, #256
	lsrs r0, r0, #32
	add r5, pc, #768
	lsrs r0, r0, #32
	add r5, pc, #768
	lsrs r0, r0, #32
	add r6, sp, #256
	lsrs r0, r0, #32
	str r7, [sp, #224]
	lsrs r3, r2, #32
	ldr r0, [sp, #304]
	lsrs r3, r2, #32
	ldr r0, [sp, #928]
	lsrs r3, r2, #32
	beq.n 0x8003224
	lsrs r3, r2, #32
	ldr r1, [sp, #96]
	lsrs r3, r2, #32
	stmia r3!, {r2, r3, r7}
	lsrs r3, r2, #32
	ldr r2, [sp, #480]
	lsrs r3, r2, #32
	lsrs r0, r5, #17
	lsrs r4, r2, #32
	ldr r4, [sp, #992]
	lsrs r3, r2, #32
	.4byte gUnknown_0813F654+0x54
	.4byte gUnknown_0813FBC4+0xe4
	ldr r6, [sp, #224]
	lsrs r3, r2, #32
	bmi.n _08003278
	lsrs r3, r2, #32
	str r1, [sp, #752]
	lsrs r3, r2, #32
	stmia r4!, {r4, r6}
	lsrs r3, r2, #32
	lsrs r4, r7, #19
	lsrs r4, r2, #32
	ldr r6, [sp, #864]
	lsrs r3, r2, #32
	add r0, pc, #368
	lsrs r3, r2, #32
	bpl.n _08003248
	lsrs r3, r2, #32
	bpl.n _0800324C
	lsrs r3, r2, #32
	bpl.n _08003250
	lsrs r3, r2, #32
	asrs r0, r5, #8
	lsrs r4, r2, #32
	bpl.n _080032B0
	lsrs r3, r2, #32
	bvs.n _080033EC
	lsrs r3, r2, #32
	bvs.n _08003410
	lsrs r3, r2, #32
	bvs.n _0800341C
	lsrs r3, r2, #32
	lsrs r4, r1, #24
	lsrs r4, r2, #32
	add r1, pc, #400
	lsrs r3, r2, #32
	add r2, pc, #656
	lsrs r3, r2, #32
	add r3, pc, #912
	lsrs r3, r2, #32
	stmia r5!, {r3, r4, r5}
	lsrs r3, r2, #32
	stmia r5!, {r3, r4, r6}
	lsrs r3, r2, #32
	stmia r5!, {r3, r4, r5, r6}
	lsrs r3, r2, #32
	ldmia r4!, {r2, r3, r6, r7}
	lsrs r3, r2, #32
	add r6, sp, #256
	lsrs r0, r0, #32
	ldrb r4, [r5, #29]
	lsrs r3, r2, #32
	ldrb r4, [r5, #29]
	lsrs r3, r2, #32
	add r6, pc, #976
	lsrs r3, r2, #32
	add r0, sp, #352
	lsrs r3, r2, #32
	add r0, sp, #816
	lsrs r3, r2, #32
	add r6, sp, #256
	lsrs r0, r0, #32
	add r6, sp, #256
	lsrs r0, r0, #32
	add r2, sp, #208
	lsrs r3, r2, #32
	movs r0, r0
	movs r0, r0
	add r6, sp, #256
	lsrs r0, r0, #32
	lsrs r4, r5, #27
	lsrs r4, r2, #32
	lsrs r0, r1, #28
	lsrs r4, r2, #32
	lsrs r4, r5, #31
	lsrs r4, r2, #32
	asrs r4, r5, #1
	lsrs r4, r2, #32
	add r6, sp, #256
	lsrs r0, r0, #32
	add r3, sp, #896
	lsrs r3, r2, #32
_080033A0:
	stmia r6!, {r2, r4, r6}
	lsrs r3, r2, #32
	asrs r0, r2, #2
	lsrs r4, r2, #32
	movs r0, r0
	movs r0, r0
_080033AC:
	add r5, sp, #352
	lsrs r3, r2, #32
	movs r0, r0
	movs r0, r0
	asrs r0, r1, #11
	lsrs r4, r2, #32
_080033B8:
	add r6, sp, #240
	lsrs r3, r2, #32
	add r6, sp, #624
	lsrs r3, r2, #32
	asrs r4, r4, #13
	lsrs r4, r2, #32
_080033C4:
	str r3, [sp, #640]
	lsrs r2, r0, #1
	movs r0, r0
	movs r0, r0
	lsrs r0, r0, #26
	lsrs r4, r2, #32
_080033D0:
	asrs r0, r7, #13
	lsrs r4, r2, #32
	lsrs r0, r3, #14
	lsrs r4, r2, #32
	add r5, pc, #672
	lsrs r3, r2, #32
_080033DC:
	stmia r6!, {r3, r4, r6, r7}
	lsrs r3, r2, #32
	add r7, sp, #688
	lsrs r3, r2, #32
	asrs r0, r4, #19
	lsrs r4, r2, #32
_080033E8:
	add r6, sp, #256
	lsrs r0, r0, #32
_080033EC:
	add r6, sp, #256
	lsrs r0, r0, #32
	asrs r4, r7, #31
	lsrs r4, r2, #32
_080033F4:
	lsrs r4, r0, #22
	lsrs r4, r2, #32
	sub sp, #304
	lsrs r3, r2, #32
	adds r4, r1, r0
	lsrs r4, r2, #32
_08003400:
	adds r4, r0, r5
	lsrs r4, r2, #32
	.2byte 0xb1b0
	.syntax unified
	.thumb
