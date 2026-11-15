	thumb_func_start sub_080041B4
sub_080041B4: @ 0x080041B4
	push {r4, r5, lr}
	adds r4, r0, #0
	adds r5, r1, #0
	adds r0, r1, #0
	ldrb r2, [r0, #0x14]
	cmp r2, #5
	beq _080041FA
	cmp r2, #0x10
	beq _080041FA
	ldrb r1, [r0, #0xa]
	lsls r1, r1, #2
	ldr r2, _08004240 @ =0x08000FF4
	ldr r1, [r2, r1]
	ldrb r2, [r1, #5]
	cmp r2, #2
	bne _080041DC
	movs r2, #0x29
	ldrb r2, [r0, r2]
	cmp r2, #0
	bne _080041FA
_080041DC:
	bl sub_08003FB0
	beq _080041FC
	adds r0, r4, #0
	adds r1, r5, #0
	bl sub_08003C84
	beq _080041FC
	ldrb r0, [r5, #0x14]
	cmp r0, #2
	bne _080041F6
	movs r0, #3
	strb r0, [r5, #0x15]
_080041F6:
	movs r0, #1
	pop {r4, r5, pc}
_080041FA:
	movs r0, #0
_080041FC:
	pop {r4, r5, pc}
	.align 2, 0
_08004200: .4byte 0xFFFF8000
_08004204: .4byte 0x08003EDC
_08004208: .4byte 0x08000FF4
_0800420C: .4byte 0x00001A51
_08004210: .4byte 0x03000940
_08004214: .4byte 0x08000FF4
_08004218: .4byte 0x03000940
_0800421C: .4byte 0x00003FFF
_08004220: .4byte 0x00008000
_08004224: .4byte 0x00004000
_08004228: .4byte 0x0000C000
_0800422C: .4byte 0x0813E74C
_08004230: .4byte 0x80000000
_08004234: .4byte 0x00000106
_08004238: .4byte 0x00000280
_0800423C: .4byte 0x08003B54
_08004240: .4byte 0x08000FF4

	.syntax unified

