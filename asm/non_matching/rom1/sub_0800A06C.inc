	.syntax unified
	THUMB_FUNC_START sub_0800A06C
sub_0800A06C: @ 0X0800A06C
	ldrh r4, [r0, #44]
	ldr r5, [pc, #208]
	ldr r4, [r5, r4]
	bx r4
	.4byte _0800A084+1
	.4byte _0800A0E0+1
	.4byte _0800A0C0+1
	.4byte _0800A0E4+1
_0800A084:
	lsrs r4, r2, #4
	lsrs r5, r3, #4
	lsls r5, r5, #6
	adds r4, r4, r5
	ldrb r4, [r7, r4]
	cmp r4, #255
	beq.n _0800A0AE
	cmp r4, #16
	bcs.n _0800A0B0
_0800A096:
	movs r5, #8
	tst r3, r5
	bne.n _0800A09E
	lsrs r4, r4, #2
_0800A09E:
	tst r2, r5
	bne.n _0800A0A4
	lsrs r4, r4, #1
_0800A0A4:
	lsrs r4, r4, #1
	bcc.n _0800A0AE
	mov r4, ip
	orrs r4, r6
	mov ip, r4
_0800A0AE:
	mov pc, lr
_0800A0B0:
	cmp r4, #34
	beq.n _0800A0AE
	cmp r4, #35
	beq.n _0800A0AE
	mov r4, ip
	orrs r4, r6
	mov ip, r4
	mov pc, lr
_0800A0C0:
	lsrs r4, r2, #4
	lsrs r5, r3, #4
	lsls r5, r5, #6
	adds r4, r4, r5
	ldrb r4, [r7, r4]
	cmp r4, #255
	beq.n _0800A0DC
	cmp r4, #16
	bcc.n _0800A096
	cmp r4, #32
	bcs.n _0800A0DC
	mov r4, ip
	orrs r4, r6
	mov ip, r4
_0800A0DC:
	mov pc, lr
	.byte 0x00
	.byte 0x00
_0800A0E0:
	mov pc, lr
	.byte 0x00
	.byte 0x00
_0800A0E4:
	lsrs r4, r2, #4
	lsrs r5, r3, #4
	lsls r5, r5, #6
	adds r4, r4, r5
	ldrb r5, [r7, r4]
	cmp r5, #255
	beq.n _0800A11C
	subs r5, #1
	cmp r5, #14
	bcs.n _0800A112
	movs r5, #80
	ldrh r5, [r0, r5]
	lsrs r5, r5, #14
	cmp r5, #2
	beq.n _0800A11C
	ldr r5, [pc, #64]
	ldrb r4, [r5, r4]
	cmp r4, #0
	beq.n _0800A11C
	mov r4, ip
	orrs r4, r6
	mov ip, r4
	mov pc, lr
_0800A112:
	cmp r5, #31
	bcs.n _0800A11C
	mov r4, ip
	orrs r4, r6
	mov ip, r4
_0800A11C:
	mov pc, lr
	.byte 0x00
	.byte 0x00
	.4byte 0x03006d14
	.4byte gUnknown_0813F5FC+0x8
	.4byte sub_08008FA4+0xfb5
	.4byte 0x000003f1
	.4byte 0x0000ffff
	.4byte sub_08008FA4+0x2fc
	.4byte 0x03000450
	.4byte 0x00004400
	.4byte 0x0800a074
	.4byte 0x0200d324
	.syntax unified
	.thumb
