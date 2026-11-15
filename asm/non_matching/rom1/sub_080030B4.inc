	thumb_func_start sub_080030B4
sub_080030B4: @ 0x080030B4
	adds r2, r0, #0
	lsrs r2, r2, #3
	orrs r2, r2
	beq _080030F8
	subs r2, #1
	beq _080030DE
	subs r2, #1
	beq _08003112
	ldr r3, _080031F4 @ =0x00000E00
	ands r3, r1
	bne _080030CC
	mov pc, lr
_080030CC:
	movs r2, #0
	ldr r3, _080031F8 @ =0x0000020E
	tst r3, r1
	beq _0800312C
	movs r2, #0x10
	ldr r3, _080031FC @ =0x000004E0
	tst r3, r1
	beq _0800312C
	mov pc, lr
_080030DE:
	ldr r3, _08003200 @ =0x0000E000
	ands r3, r1
	bne _080030E6
	mov pc, lr
_080030E6:
	movs r2, #0
	ldr r3, _08003204 @ =0x0000200E
	tst r3, r1
	beq _0800312C
	movs r2, #0x10
	ldr r3, _08003208 @ =0x000040E0
	tst r3, r1
	beq _0800312C
	mov pc, lr
_080030F8:
	movs r3, #0xe
	ands r3, r1
	bne _08003100
	mov pc, lr
_08003100:
	movs r2, #8
	ldr r3, _0800320C @ =0x0000E004
	tst r3, r1
	beq _0800312C
	movs r2, #0x18
	ldr r3, _08003210 @ =0x00000E02
	tst r3, r1
	beq _0800312C
	mov pc, lr
_08003112:
	movs r3, #0xe0
	ands r3, r1
	bne _0800311A
	mov pc, lr
_0800311A:
	movs r2, #8
	ldr r3, _08003214 @ =0x0000E040
	tst r3, r1
	beq _0800312C
	movs r2, #0x18
	ldr r3, _08003218 @ =0x00000E20
	tst r3, r1
	beq _0800312C
	mov pc, lr
_0800312C:
	adds r0, r2, #0
	mov pc, lr

