	THUMB_FUNC_START sub_080A38AC
sub_080A38AC: @ 0x080A38AC
	push {lr}
	ldr r0, _080A3908  @ =gRam
	ldr r2, _080A390C  @ =0x000009E5
	add r1, r0, r2
	ldrb r1, [r1]
	add r2, r0, #0
	cmp r1, #2
	bne _080A38F0
	ldr r3, _080A3910  @ =0x000017AE
	add r0, r2, r3
	ldrb r1, [r0]
	mov r0, #3
	and r0, r0, r1
	cmp r0, #3
	bne _080A38F0
	ldr r1, _080A3914  @ =0x000016D6
	add r0, r2, r1
	mov r1, #0
	strb r1, [r0]
	sub r3, r3, #215
	add r0, r2, r3
	strb r1, [r0]
	add r3, r3, #80
	add r0, r2, r3
	strb r1, [r0]
	sub r3, r3, #87
	add r0, r2, r3
	strb r1, [r0]
	add r3, r3, #1
	add r0, r2, r3
	strb r1, [r0]
	add r3, r3, #90
	add r0, r2, r3
	strb r1, [r0]
_080A38F0:
	ldr r1, _080A3918  @ =0x00001783
	add r0, r2, r1
	ldrb r0, [r0]
	cmp r0, #0
	beq _080A3902
	ldr r3, _080A391C  @ =0x00001727
	add r1, r2, r3
	mov r0, #0
	strb r0, [r1]
_080A3902:
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080A3908:
	.4byte gRam
_080A390C:
	.4byte 0x000009E5
_080A3910:
	.4byte 0x000017AE
_080A3914:
	.4byte 0x000016D6
_080A3918:
	.4byte 0x00001783
_080A391C:
	.4byte 0x00001727
	THUMB_FUNC_END sub_080A38AC

