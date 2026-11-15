	THUMB_FUNC_START sub_080B50F0
sub_080B50F0: @ 0x080B50F0
	push {r4,r5,lr}
	ldr r4, _080B5118  @ =gRam
	ldr r1, _080B511C  @ =0x00000534
	add r0, r4, r1
	ldrh r1, [r0]
	ldr r0, _080B5120  @ =0x00000202
	and r0, r0, r1
	cmp r0, #0
	beq _080B512C
	ldr r3, _080B5124  @ =0x00000A4C
	add r1, r4, r3
	ldrh r0, [r1]
	add r0, r0, #2
	mov r2, #0
	strh r0, [r1]
	ldr r1, _080B5128  @ =0x00000A5A
	add r0, r4, r1
	strb r2, [r0]
	b _080B513E
	.byte 0x00
	.byte 0x00
_080B5118:
	.4byte gRam
_080B511C:
	.4byte 0x00000534
_080B5120:
	.4byte 0x00000202
_080B5124:
	.4byte 0x00000A4C
_080B5128:
	.4byte 0x00000A5A
_080B512C:
	bl sub_080B4F44
	ldr r3, _080B51C0  @ =0x00000A5E
	add r0, r4, r3
	ldrb r0, [r0]
	cmp r0, #0
	beq _080B513E
	bl sub_080B6384
_080B513E:
	ldr r2, _080B51C4  @ =gRam
	mov r0, #150
	lsl r0, r0, #4
	add r4, r2, r0
	mov r0, #0
	strh r0, [r4]
	ldr r1, _080B51C8  @ =0x0000097C
	add r5, r2, r1
	strh r0, [r5]
	ldr r1, _080B51CC  @ =gUnknown_0816F702
	ldr r3, _080B51D0  @ =0x00000AB2
	add r0, r2, r3
	ldrh r0, [r0]
	lsr r0, r0, #1
	lsl r0, r0, #1
	add r0, r0, r1
	ldrb r1, [r0]
	mov r0, #15
	and r0, r0, r1
	ldr r3, _080B51D4  @ =0x00000964
	add r1, r2, r3
	strb r0, [r1]
	add r3, r3, #122
	add r1, r2, r3
	sub r0, r0, #1
	ldrb r1, [r1]
	add r0, r0, r1
	sub r3, r3, #125
	add r1, r2, r3
	strb r0, [r1]
	ldr r1, _080B51D8  @ =0x00000965
	add r2, r2, r1
	strb r0, [r2]
	bl sub_080B5350
	ldrb r0, [r4]
	add r0, r0, #1
	strb r0, [r4]
_080B518A:
	bl sub_080B5400
	ldrb r0, [r5]
	add r0, r0, #1
	strb r0, [r5]
	mov r0, #0
	ldrsb r0, [r4, r0]
	cmp r0, #9
	bne _080B518A
	bl sub_080B5534
	ldr r1, _080B51C4  @ =gRam
	mov r3, #150
	lsl r3, r3, #4
	add r1, r1, r3
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	bl sub_080B567C
	bl sub_080B577C
	bl sub_080B623C
	pop {r4,r5}
	pop {r0}
	bx r0
_080B51C0:
	.4byte 0x00000A5E
_080B51C4:
	.4byte gRam
_080B51C8:
	.4byte 0x0000097C
_080B51CC:
	.4byte gUnknown_0816F702
_080B51D0:
	.4byte 0x00000AB2
_080B51D4:
	.4byte 0x00000964
_080B51D8:
	.4byte 0x00000965
	THUMB_FUNC_END sub_080B50F0

