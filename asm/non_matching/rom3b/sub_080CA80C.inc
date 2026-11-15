	THUMB_FUNC_START sub_080CA80C
sub_080CA80C: @ 0x080CA80C
	push {r4-r6,lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	lsl r1, r1, #24
	lsr r1, r1, #24
	ldr r5, _080CA898  @ =gRam
	ldr r3, _080CA89C  @ =0x000011D2
	add r2, r5, r3
	add r2, r0, r2
	mov r3, #20
	strb r3, [r2]
	ldr r4, _080CA8A0  @ =0x000015F8
	add r2, r5, r4
	strb r3, [r2]
	ldr r6, _080CA8A4  @ =0x00000EE2
	add r2, r5, r6
	add r2, r1, r2
	ldrb r4, [r2]
	ldr r3, _080CA8A8  @ =0x00000F02
	add r2, r5, r3
	add r2, r1, r2
	ldrb r2, [r2]
	lsl r2, r2, #8
	orr r4, r4, r2
	lsl r4, r4, #16
	mov r6, #128
	lsl r6, r6, #11
	add r4, r4, r6
	lsr r4, r4, #16
	sub r3, r3, #48
	add r2, r5, r3
	add r2, r1, r2
	ldrb r3, [r2]
	ldr r6, _080CA8AC  @ =0x00000EF2
	add r2, r5, r6
	add r1, r1, r2
	ldrb r1, [r1]
	lsl r1, r1, #8
	orr r3, r3, r1
	lsl r3, r3, #16
	mov r1, #224
	lsl r1, r1, #13
	add r3, r3, r1
	lsr r3, r3, #16
	ldr r2, _080CA8B0  @ =0x0000122C
	add r1, r5, r2
	add r1, r0, r1
	strb r4, [r1]
	ldr r6, _080CA8B4  @ =0x00001268
	add r1, r5, r6
	add r1, r0, r1
	lsr r4, r4, #8
	strb r4, [r1]
	sub r2, r2, #30
	add r1, r5, r2
	add r1, r0, r1
	strb r3, [r1]
	ldr r4, _080CA8B8  @ =0x0000124A
	add r1, r5, r4
	add r1, r0, r1
	lsr r3, r3, #8
	strb r3, [r1]
	add r6, r6, #150
	add r5, r5, r6
	add r0, r0, r5
	mov r1, #10
	strb r1, [r0]
	pop {r4-r6}
	pop {r0}
	bx r0
_080CA898:
	.4byte gRam
_080CA89C:
	.4byte 0x000011D2
_080CA8A0:
	.4byte 0x000015F8
_080CA8A4:
	.4byte 0x00000EE2
_080CA8A8:
	.4byte 0x00000F02
_080CA8AC:
	.4byte 0x00000EF2
_080CA8B0:
	.4byte 0x0000122C
_080CA8B4:
	.4byte 0x00001268
_080CA8B8:
	.4byte 0x0000124A
	THUMB_FUNC_END sub_080CA80C

