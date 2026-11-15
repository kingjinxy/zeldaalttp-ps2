	thumb_func_start sub_080009F4
sub_080009F4: @ 0x080009F4
	movs r3, #0
_080009F6:
	push {r4, r5}
	ldr r5, _08000AC8 @ =0x030066B0
	ldr r4, _08000ACC @ =0x03000204
	ldrb r4, [r4]
	orrs r4, r4
	beq _08000A04
	ldr r5, _08000AD0 @ =0x03006730
_08000A04:
	ldr r4, _08000AD4 @ =0x03000E34
	ldr r4, [r4]
	adds r4, #0xb
	cmp r4, r5
	bhs _08000A3C
	ldr r4, _08000AD8 @ =0x03000E34
	ldr r4, [r4]
	strb r3, [r4]
	adds r4, #1
	movs r3, #4
_08000A18:
	strb r1, [r4]
	adds r4, #1
	lsrs r1, r1, #8
	subs r3, #1
	bne _08000A18
	movs r3, #4
_08000A24:
	strb r0, [r4]
	adds r4, #1
	lsrs r0, r0, #8
	subs r3, #1
	bne _08000A24
	strb r2, [r4]
	adds r4, #1
	lsrs r2, r2, #8
	strb r2, [r4]
	adds r4, #1
	ldr r3, _08000ADC @ =0x03000E34
	str r4, [r3]
_08000A3C:
	pop {r4, r5}
	mov pc, lr

