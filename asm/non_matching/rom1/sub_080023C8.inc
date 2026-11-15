	thumb_func_start sub_080023C8
sub_080023C8: @ 0x080023C8
	push {lr}
	ldrb r2, [r0, #0x14]
	cmp r2, #1
	bne _080023F2
	bl sub_08001D5C
	ldr r2, _08002420 @ =0x000001A0
	strh r2, [r1, #0x38]
	movs r2, #0x3c
	movs r3, #0x3a
	strb r2, [r1, r3]
	movs r2, #0xe
	movs r3, #0xc
	strb r2, [r1, r3]
	ldr r0, [r1, #0x28]
	movs r2, #0x5c
	movs r3, #0x3d
	strb r2, [r0, r3]
	movs r2, #0x99
	bl sub_080031B8
_080023F2:
	pop {pc}
	.align 2, 0
_080023F4: .4byte 0x7FFFFFFF
_080023F8: .4byte 0x00000FC0
_080023FC: .4byte 0x03000468
_08002400: .4byte 0x0300046A
_08002404: .4byte 0x080021AC
_08002408: .4byte 0x080021B4
_0800240C: .4byte 0x00004000
_08002410: .4byte 0x08001010
_08002414: .4byte 0x00000176
_08002418: .4byte 0xC000C000
_0800241C: .4byte 0x3FFF3FFF
_08002420: .4byte 0x000001A0
_08002424:

	.INCBIN "baserom.gba", 0x2424, 0x2E70-0x2424

