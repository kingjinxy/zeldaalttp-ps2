	THUMB_FUNC_START sub_080AC100
sub_080AC100: @ 0x080AC100
	push {r4-r6,lr}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r4, _080AC1AC  @ =gRam
	ldr r2, _080AC1B0  @ =0x00000DC5
	add r1, r4, r2
	add r1, r0, r1
	ldrb r2, [r1]
	ldr r3, _080AC1B4  @ =0x00000DD9
	add r1, r4, r3
	add r1, r0, r1
	ldrb r1, [r1]
	lsl r1, r1, #8
	add r2, r2, r1
	ldr r1, _080AC1B8  @ =0x0000182C
	add r6, r4, r1
	strh r2, [r6]
	ldr r2, _080AC1BC  @ =0x00000DCF
	add r1, r4, r2
	add r1, r0, r1
	ldrb r2, [r1]
	add r3, r3, #10
	add r1, r4, r3
	add r0, r0, r1
	ldrb r0, [r0]
	lsl r0, r0, #8
	add r2, r2, r0
	ldr r0, _080AC1C0  @ =0x0000182E
	add r5, r4, r0
	strh r2, [r5]
	mov r0, #1
	mov r1, #6
	mov r2, sp
	bl sub_080AB89C
	lsl r0, r0, #24
	cmp r0, #0
	bne _080AC1A4
	mov r1, sp
	ldr r2, _080AC1C4  @ =0x00000E29
	add r0, r4, r2
	ldrb r1, [r1]
	add r0, r0, r1
	mov r1, #0
	strb r1, [r0]
	mov r1, sp
	ldr r3, _080AC1C8  @ =0x00001832
	add r0, r4, r3
	ldrb r1, [r1]
	add r0, r0, r1
	mov r1, #1
	strb r1, [r0]
	ldr r1, _080AC1CC  @ =gUnknown_0816E130
	ldr r2, _080AC1D0  @ =0x00001830
	add r0, r4, r2
	ldrb r0, [r0]
	add r0, r0, r1
	ldrb r1, [r0]
	ldr r0, _080AC1D4  @ =gUnknown_0816E110
	lsr r1, r1, #1
	lsl r1, r1, #1
	add r0, r1, r0
	ldrh r0, [r0]
	ldrh r6, [r6]
	add r0, r0, r6
	mov r3, #150
	lsl r3, r3, #4
	add r2, r4, r3
	strh r0, [r2]
	ldr r0, _080AC1D8  @ =gUnknown_0816E120
	add r1, r1, r0
	ldrh r0, [r1]
	ldrh r5, [r5]
	add r0, r0, r5
	ldr r2, _080AC1DC  @ =0x00000964
	add r1, r4, r2
	strh r0, [r1]
	mov r0, sp
	ldrb r0, [r0]
	bl sub_080ABA78
_080AC1A4:
	add sp, sp, #4
	pop {r4-r6}
	pop {r0}
	bx r0
_080AC1AC:
	.4byte gRam
_080AC1B0:
	.4byte 0x00000DC5
_080AC1B4:
	.4byte 0x00000DD9
_080AC1B8:
	.4byte 0x0000182C
_080AC1BC:
	.4byte 0x00000DCF
_080AC1C0:
	.4byte 0x0000182E
_080AC1C4:
	.4byte 0x00000E29
_080AC1C8:
	.4byte 0x00001832
_080AC1CC:
	.4byte gUnknown_0816E130
_080AC1D0:
	.4byte 0x00001830
_080AC1D4:
	.4byte gUnknown_0816E110
_080AC1D8:
	.4byte gUnknown_0816E120
_080AC1DC:
	.4byte 0x00000964
	THUMB_FUNC_END sub_080AC100

