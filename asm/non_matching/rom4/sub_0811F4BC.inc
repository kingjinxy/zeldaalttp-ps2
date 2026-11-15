	THUMB_FUNC_START sub_0811F4BC
sub_0811F4BC: @ 0x0811F4BC
	push {r4,r5,lr}
	lsl r0, r0, #24
	lsr r3, r0, #24
	ldr r4, _0811F530  @ =gRam
	ldr r0, _0811F534  @ =0x00001719
	add r2, r4, r0
	ldrb r0, [r2]
	cmp r0, #18
	bne _0811F4D8
	ldr r0, _0811F538  @ =0x000016FA
	add r1, r4, r0
	mov r0, #0
	strb r0, [r1]
	strb r0, [r2]
_0811F4D8:
	ldr r1, _0811F53C  @ =0x00000BC4
	add r0, r4, r1
	mov r2, #0
	strb r2, [r0]
	ldr r1, _0811F540  @ =0x00000E15
	add r0, r4, r1
	add r0, r3, r0
	mov r1, #45
	strb r1, [r0]
	ldr r1, _0811F544  @ =0x00001844
	add r0, r4, r1
	add r0, r3, r0
	strb r2, [r0]
	ldr r1, _0811F548  @ =0x00000E1F
	add r0, r4, r1
	add r0, r3, r0
	strb r2, [r0]
	add r1, r1, #10
	add r0, r4, r1
	add r0, r3, r0
	strb r2, [r0]
	ldr r1, _0811F54C  @ =0x00001832
	add r0, r4, r1
	add r0, r3, r0
	strb r2, [r0]
	add r1, r1, #5
	add r0, r4, r1
	add r0, r3, r0
	strb r2, [r0]
	add r1, r1, #73
	add r0, r4, r1
	add r0, r3, r0
	strb r2, [r0]
	ldr r0, _0811F550  @ =0x0000177A
	add r5, r4, r0
	ldrb r1, [r5]
	add r0, r3, #1
	cmp r1, r0
	beq _0811F554
	add r0, r3, #0
	bl sub_0811F56C
	b _0811F562
	.byte 0x00
	.byte 0x00
_0811F530:
	.4byte gRam
_0811F534:
	.4byte 0x00001719
_0811F538:
	.4byte 0x000016FA
_0811F53C:
	.4byte 0x00000BC4
_0811F540:
	.4byte 0x00000E15
_0811F544:
	.4byte 0x00001844
_0811F548:
	.4byte 0x00000E1F
_0811F54C:
	.4byte 0x00001832
_0811F550:
	.4byte 0x0000177A
_0811F554:
	strb r2, [r5]
	ldr r1, _0811F568  @ =0x00001791
	add r2, r4, r1
	ldrb r1, [r2]
	mov r0, #128
	and r0, r0, r1
	strb r0, [r2]
_0811F562:
	pop {r4,r5}
	pop {r0}
	bx r0
_0811F568:
	.4byte 0x00001791
	THUMB_FUNC_END sub_0811F4BC

