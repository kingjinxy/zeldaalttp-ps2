	THUMB_FUNC_START sub_080C9564
sub_080C9564: @ 0x080C9564
	push {r4-r6,lr}
	add r0, r1, #0
	add r6, r2, #0
	lsl r0, r0, #16
	lsr r0, r0, #16
	bl sub_080C95C0
	bl sub_080AF16C
	ldr r4, _080C95B4  @ =gRam
	ldr r1, _080C95B8  @ =0x00001719
	add r0, r4, r1
	mov r5, #0
	strb r5, [r0]
	bl sub_08093078
	ldr r1, _080C95BC  @ =0x00001702
	add r0, r4, r1
	strb r5, [r0]
	sub r1, r1, #10
	add r0, r4, r1
	strb r5, [r0]
	mov r2, #0
	add r1, r1, #32
	add r0, r4, r1
	ldrb r1, [r0]
	cmp r1, #1
	bls _080C959E
	mov r2, #1
_080C959E:
	cmp r1, #2
	bne _080C95A4
	strb r5, [r0]
_080C95A4:
	cmp r6, #0
	beq _080C95AC
	ldrb r0, [r0]
	strb r0, [r6]
_080C95AC:
	add r0, r2, #0
	pop {r4-r6}
	pop {r1}
	bx r1
_080C95B4:
	.4byte gRam
_080C95B8:
	.4byte 0x00001719
_080C95BC:
	.4byte 0x00001702
	THUMB_FUNC_END sub_080C9564

