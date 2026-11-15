	thumb_func_start sub_080079C8
sub_080079C8: @ 0x080079C8
	push {lr}
	mov r1, sl
	ldrb r2, [r1, #0x1b]
	movs r3, #8
	tst r2, r3
	beq _080079E6
	movs r3, #0x70
	bl sub_08007740
	movs r2, #0x28
	strb r2, [r0, #7]
	movs r2, #7
	strb r2, [r0, #4]
	movs r2, #6
	strb r2, [r0, #0xf]
_080079E6:
	pop {pc}
	.align 2, 0
_080079E8: .4byte 0x08000FF4
_080079EC: .4byte 0x080071A8
_080079F0: .4byte 0x0000FF7F
_080079F4: .4byte 0x080074AC
_080079F8: .4byte 0x03000BD0
_080079FC: .4byte 0x03000510
_08007A00: .4byte 0x080074BC
_08007A04: .4byte 0x03000838
_08007A08: .4byte 0x03006830
_08007A0C: .4byte 0x0800749C
_08007A10: .4byte 0x03000838
_08007A14: .4byte 0x03006830
_08007A18: .4byte 0x0800749C
_08007A1C: .4byte 0x0800749C
_08007A20: .4byte 0x080074A4
_08007A24: .4byte 0x080074A4
_08007A28: .4byte 0x08007458
_08007A2C: .4byte 0x00001291
_08007A30: .4byte 0x0800749C
_08007A34: .4byte 0x00001201

	.INCBIN "baserom.gba", 0x7A38, 0x8DD8-0x7A38

	.GLOBAL sub_08008DD8
sub_08008DD8:
	.INCBIN "baserom.gba", 0x8DD8, 0x8ED8-0x8DD8

