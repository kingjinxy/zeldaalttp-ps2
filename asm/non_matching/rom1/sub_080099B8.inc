	.syntax unified
	THUMB_FUNC_START sub_080099B8
sub_080099B8: @ 0X080099B8
	ldrh r7, [r2, #50]
	subs r6, r6, r7
	adds r6, r6, r1
	lsls r4, r1, #1
	adds r4, #1
	cmp r6, r4
	bcs.n _080099D4
	movs r3, #0
	ldrh r6, [r0, #54]
	ldrh r7, [r2, #54]
	cmp r6, r7
	bcs.n _080099EC
	movs r3, #8
	b.n _080099EC
_080099D4:
	ldrh r6, [r0, #54]
	ldrh r7, [r2, #54]
	subs r6, r6, r7
	adds r6, r6, r1
	cmp r6, r4
	bcs.n _080099FA
	movs r3, #12
	ldrh r6, [r0, #50]
	ldrh r7, [r2, #50]
	cmp r6, r7
	bcs.n _080099EC
	movs r3, #4
_080099EC:
	lsrs r5, r5, #14
	lsls r5, r5, #2
	ldr r4, [pc, #792]
	ldr r1, [r4, r5]
	mov r4, ip
	ldr r4, [r4, r3]
	bx r4
_080099FA:
	movs r0, #0
	pop {r4, r5, r6, r7, pc}
	.byte 0x00
	.byte 0x00
	.byte 0x00
	.byte 0xf7
	.byte 0x09
	.byte 0x00
	.byte 0x00
	.byte 0x09
	.byte 0xf7
	.byte 0x00
	.4byte _08009A28+1
	.4byte _08009A90+1
	.4byte _08009AF4+1
	.4byte _08009B54+1
	.4byte _08009BB8+1
	.4byte _08009C08+1
	.4byte _08009C54+1
	ldr r4, [sp, #644]
	lsrs r0, r0, #32
_08009A28:
	ldrh r4, [r0, #50]
	ldrh r5, [r2, #50]
	adds r4, r4, r5
	lsrs r4, r4, #1
	ldrh r5, [r0, #54]
	subs r5, #6
	bpl.n _08009A38
	movs r5, #0
_08009A38:
	adds r3, r5, #0
	ldr r7, [pc, #724]
	ldrh r6, [r7, #24]
	subs r4, r4, r6
	ldrh r6, [r7, #26]
	subs r5, r5, r6
	lsrs r6, r4, #4
	lsrs r7, r5, #4
	lsls r7, r7, #6
	adds r6, r6, r7
	adds r1, r1, r6
	movs r7, #8
	ands r4, r7
	lsrs r4, r4, #3
	ldr r7, [pc, #700]
	ldrb r7, [r7, r4]
	ldrh r6, [r2, #54]
	cmp r3, r6
	bcc.n _08009A86
	subs r3, r3, r6
	adds r3, #8
	lsrs r3, r3, #4
	beq.n _08009A7C
	adds r3, #1
_08009A68:
	ldrb r4, [r1, #0]
	ands r4, r7
	bne.n _08009A78
	subs r1, #64
	subs r3, #1
	bne.n _08009A68
_08009A74:
	movs r0, #128
	pop {r4, r5, r6, r7, pc}
_08009A78:
	subs r3, #1
	bne.n _08009A86
_08009A7C:
	ldrb r4, [r1, #0]
	movs r5, #3
	ands r7, r5
	ands r4, r7
	beq.n _08009A74
_08009A86:
	movs r0, #0
	pop {r4, r5, r6, r7, pc}
	.byte 0x00
	.byte 0x00
	.byte 0xfa
	.byte 0xf5
	.byte 0x00
	.byte 0x00
_08009A90:
	ldrh r4, [r0, #50]
	adds r4, #6
	adds r3, r4, #0
	ldrh r5, [r0, #54]
	ldrh r6, [r2, #54]
	adds r5, r5, r6
	lsrs r5, r5, #1
	ldr r7, [pc, #632]
	ldrh r6, [r7, #24]
	subs r4, r4, r6
	ldrh r6, [r7, #26]
	subs r5, r5, r6
	lsrs r6, r4, #4
	lsrs r7, r5, #4
	lsls r7, r7, #6
	adds r6, r6, r7
	adds r1, r1, r6
	movs r7, #8
	ands r5, r7
	lsrs r5, r5, #3
	ldr r7, [pc, #608]
	ldrb r7, [r7, r5]
	ldrh r6, [r2, #50]
	cmp r6, r3
	bcc.n _08009AEA
	subs r6, r6, r3
	adds r6, #8
	lsrs r6, r6, #4
	beq.n _08009AE0
	adds r6, #1
_08009ACC:
	ldrb r4, [r1, #0]
	ands r4, r7
	bne.n _08009ADC
	adds r1, #1
	subs r6, #1
	bne.n _08009ACC
_08009AD8:
	movs r0, #136
	pop {r4, r5, r6, r7, pc}
_08009ADC:
	subs r6, #1
	bne.n _08009AEA
_08009AE0:
	ldrb r4, [r1, #0]
	movs r5, #10
	ands r7, r5
	ands r4, r7
	beq.n _08009AD8
_08009AEA:
	movs r0, #0
	pop {r4, r5, r6, r7, pc}
	.byte 0x00
	.byte 0x00
	.byte 0xfc
	.byte 0xf3
	.byte 0x00
	.byte 0x00
_08009AF4:
	ldrh r4, [r0, #50]
	ldrh r5, [r2, #50]
	adds r4, r4, r5
	lsrs r4, r4, #1
	ldrh r5, [r0, #54]
	adds r5, #6
	adds r3, r5, #0
	ldr r7, [pc, #540]
	ldrh r6, [r7, #24]
	subs r4, r4, r6
	ldrh r6, [r7, #26]
	subs r5, r5, r6
	lsrs r6, r4, #4
	lsrs r7, r5, #4
	lsls r7, r7, #6
	adds r6, r6, r7
	adds r1, r1, r6
	movs r7, #8
	ands r4, r7
	lsrs r4, r4, #3
	ldr r7, [pc, #516]
	ldrb r7, [r7, r4]
	ldrh r6, [r2, #54]
	cmp r6, r3
	.syntax unified
	.thumb
