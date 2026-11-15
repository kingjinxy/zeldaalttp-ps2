	THUMB_FUNC_START sub_080AE620
sub_080AE620: @ 0x080AE620
	push {r4,lr}
	sub sp, sp, #4
	ldr r0, _080AE678  @ =gSword
	ldrb r0, [r0]
	add r0, r0, #1
	mov r1, #254
	and r0, r0, r1
	cmp r0, #0
	beq _080AE66E
	mov r0, #0
	mov r1, #59
	mov r2, sp
	bl sub_080AB89C
	lsl r0, r0, #24
	asr r3, r0, #24
	cmp r3, #0
	bne _080AE66E
	ldr r2, _080AE67C  @ =gRam
	mov r1, sp
	ldr r4, _080AE680  @ =0x00000E29
	add r0, r2, r4
	ldrb r1, [r1]
	add r0, r0, r1
	strb r3, [r0]
	mov r1, sp
	ldr r3, _080AE684  @ =0x00001832
	add r0, r2, r3
	ldrb r1, [r1]
	add r0, r0, r1
	mov r1, #1
	strb r1, [r0]
	mov r0, sp
	ldr r4, _080AE688  @ =0x00001844
	add r2, r2, r4
	ldrb r0, [r0]
	add r2, r2, r0
	mov r0, #34
	strb r0, [r2]
_080AE66E:
	add sp, sp, #4
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080AE678:
	.4byte gSword
_080AE67C:
	.4byte gRam
_080AE680:
	.4byte 0x00000E29
_080AE684:
	.4byte 0x00001832
_080AE688:
	.4byte 0x00001844
	THUMB_FUNC_END sub_080AE620

