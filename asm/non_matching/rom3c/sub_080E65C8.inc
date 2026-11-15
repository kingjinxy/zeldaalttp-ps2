	THUMB_FUNC_START sub_080E65C8
sub_080E65C8: @ 0x080E65C8
	push {r4,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r0, r4, #0
	bl sub_080C500C
	lsl r0, r0, #24
	cmp r0, #0
	beq _080E662A
	add r0, r4, #0
	mov r1, #32
	bl sub_080C2CB4
	ldr r1, _080E6630  @ =gRam
	mov r2, #150
	lsl r2, r2, #4
	add r0, r1, r2
	ldrb r2, [r0]
	ldr r3, _080E6634  @ =0x000016CD
	add r0, r1, r3
	strb r2, [r0]
	ldr r3, _080E6638  @ =0x00001102
	add r0, r1, r3
	add r0, r4, r0
	mvn r2, r2
	strb r2, [r0]
	ldr r2, _080E663C  @ =0x00000961
	add r0, r1, r2
	ldrb r2, [r0]
	ldr r3, _080E6640  @ =0x000016CE
	add r0, r1, r3
	strb r2, [r0]
	ldr r3, _080E6644  @ =0x00001112
	add r0, r1, r3
	add r0, r4, r0
	mvn r2, r2
	strb r2, [r0]
	ldr r0, _080E6648  @ =0x000016F8
	add r2, r1, r0
	mov r0, #4
	strb r0, [r2]
	ldr r2, _080E664C  @ =0x00001072
	add r1, r1, r2
	add r1, r4, r1
	mov r0, #12
	strb r0, [r1]
	add r0, r4, #0
	bl sub_080E692C
_080E662A:
	pop {r4}
	pop {r0}
	bx r0
_080E6630:
	.4byte gRam
_080E6634:
	.4byte 0x000016CD
_080E6638:
	.4byte 0x00001102
_080E663C:
	.4byte 0x00000961
_080E6640:
	.4byte 0x000016CE
_080E6644:
	.4byte 0x00001112
_080E6648:
	.4byte 0x000016F8
_080E664C:
	.4byte 0x00001072
	THUMB_FUNC_END sub_080E65C8

