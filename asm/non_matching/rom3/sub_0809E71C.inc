	THUMB_FUNC_START sub_0809E71C
sub_0809E71C: @ 0x0809E71C
	push {lr}
	ldr r2, _0809E768  @ =gRam
	ldr r1, _0809E76C  @ =0x00001804
	add r0, r2, r1
	ldrb r0, [r0]
	cmp r0, #0
	beq _0809E762
	ldr r3, _0809E770  @ =0x0000177F
	add r0, r2, r3
	ldrb r0, [r0]
	cmp r0, #64
	beq _0809E762
	sub r1, r1, #180
	add r0, r2, r1
	mov r1, #0
	strb r1, [r0]
	add r3, r3, #96
	add r0, r2, r3
	strb r1, [r0]
	sub r3, r3, #41
	add r0, r2, r3
	strb r1, [r0]
	bl sub_08092B0C
	mov r0, #1
	mov r1, #29
	bl sub_080AD510
	bl sub_080C2774
	mov r0, #120
	bl sub_0809E49C
	bl sub_08099324
_0809E762:
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0809E768:
	.4byte gRam
_0809E76C:
	.4byte 0x00001804
_0809E770:
	.4byte 0x0000177F
	THUMB_FUNC_END sub_0809E71C

