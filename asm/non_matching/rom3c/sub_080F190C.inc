	THUMB_FUNC_START sub_080F190C
sub_080F190C: @ 0x080F190C
	push {r4-r6,lr}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r6, r4, #0
	bl sub_0809E3CC
	cmp r0, #0
	bne _080F196E
	ldr r5, _080F1944  @ =gRam
	ldr r1, _080F1948  @ =0x0000166A
	add r0, r5, r1
	ldrb r0, [r0]
	cmp r0, #0
	bne _080F1950
	mov r1, #134
	lsl r1, r1, #1
	add r0, r4, #0
	mov r2, sp
	bl sub_080C94F4
	lsl r0, r0, #24
	cmp r0, #0
	beq _080F196E
	ldr r0, _080F194C  @ =0x00000F52
	add r1, r5, r0
	add r1, r4, r1
	b _080F1968
_080F1944:
	.4byte gRam
_080F1948:
	.4byte 0x0000166A
_080F194C:
	.4byte 0x00000F52
_080F1950:
	mov r1, #134
	lsl r1, r1, #1
	add r0, r6, #0
	mov r2, sp
	bl sub_080C9164
	lsl r0, r0, #24
	cmp r0, #0
	beq _080F196E
	ldr r0, _080F1978  @ =0x00000F52
	add r1, r5, r0
	add r1, r6, r1
_080F1968:
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
_080F196E:
	add sp, sp, #4
	pop {r4-r6}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080F1978:
	.4byte 0x00000F52
	THUMB_FUNC_END sub_080F190C

