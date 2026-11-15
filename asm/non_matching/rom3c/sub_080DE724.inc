	THUMB_FUNC_START sub_080DE724
sub_080DE724: @ 0x080DE724
	push {r4-r6,lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	add r5, r0, #0
	ldr r4, _080DE820  @ =gRam
	ldr r0, _080DE824  @ =0x00001172
	add r6, r4, r0
	add r1, r5, r6
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	mov r0, #181
	add r1, r5, #0
	bl sub_080CA538
	add r2, r0, #0
	cmp r2, #0
	blt _080DE79C
	mov r3, #150
	lsl r3, r3, #4
	add r1, r4, r3
	ldrh r0, [r1]
	sub r0, r0, #24
	strh r0, [r1]
	ldr r3, _080DE828  @ =0x00000EE2
	add r0, r4, r3
	add r0, r2, r0
	ldrb r1, [r1]
	strb r1, [r0]
	ldr r1, _080DE82C  @ =0x00000F02
	add r0, r4, r1
	add r0, r2, r0
	ldr r3, _080DE830  @ =0x00000961
	add r1, r4, r3
	ldrb r1, [r1]
	strb r1, [r0]
	ldr r0, _080DE834  @ =0x00000964
	add r1, r4, r0
	ldrh r0, [r1]
	sub r0, r0, #24
	strh r0, [r1]
	ldr r3, _080DE838  @ =0x00000ED2
	add r0, r4, r3
	add r0, r2, r0
	ldrb r1, [r1]
	strb r1, [r0]
	ldr r1, _080DE83C  @ =0x00000EF2
	add r0, r4, r1
	add r0, r2, r0
	ldr r3, _080DE840  @ =0x00000965
	add r1, r4, r3
	ldrb r1, [r1]
	strb r1, [r0]
	ldr r1, _080DE844  @ =0x00001052
	add r0, r4, r1
	add r0, r2, r0
	mov r1, #1
	strb r1, [r0]
	add r0, r2, r6
	strb r1, [r0]
_080DE79C:
	ldr r0, _080DE848  @ =gCrystalCount
	ldrb r1, [r0]
	mov r0, #5
	and r0, r0, r1
	cmp r0, #5
	bne _080DE818
	ldr r3, _080DE84C  @ =0x00001662
	add r0, r4, r3
	ldrb r1, [r0]
	mov r0, #32
	and r0, r0, r1
	cmp r0, #0
	beq _080DE818
	mov r0, #181
	add r1, r5, #0
	bl sub_080CA538
	add r2, r0, #0
	cmp r2, #0
	blt _080DE818
	mov r0, #150
	lsl r0, r0, #4
	add r1, r4, r0
	ldrh r0, [r1]
	sub r0, r0, #56
	strh r0, [r1]
	ldr r3, _080DE828  @ =0x00000EE2
	add r0, r4, r3
	add r0, r2, r0
	ldrb r1, [r1]
	strb r1, [r0]
	ldr r1, _080DE82C  @ =0x00000F02
	add r0, r4, r1
	add r0, r2, r0
	ldr r3, _080DE830  @ =0x00000961
	add r1, r4, r3
	ldrb r1, [r1]
	strb r1, [r0]
	ldr r0, _080DE834  @ =0x00000964
	add r1, r4, r0
	ldrh r0, [r1]
	sub r0, r0, #24
	strh r0, [r1]
	ldr r3, _080DE838  @ =0x00000ED2
	add r0, r4, r3
	add r0, r2, r0
	ldrb r1, [r1]
	strb r1, [r0]
	ldr r1, _080DE83C  @ =0x00000EF2
	add r0, r4, r1
	add r0, r2, r0
	ldr r3, _080DE840  @ =0x00000965
	add r1, r4, r3
	ldrb r1, [r1]
	strb r1, [r0]
	ldr r1, _080DE844  @ =0x00001052
	add r0, r4, r1
	add r0, r2, r0
	mov r1, #2
	strb r1, [r0]
	add r0, r2, r6
	strb r1, [r0]
_080DE818:
	pop {r4-r6}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080DE820:
	.4byte gRam
_080DE824:
	.4byte 0x00001172
_080DE828:
	.4byte 0x00000EE2
_080DE82C:
	.4byte 0x00000F02
_080DE830:
	.4byte 0x00000961
_080DE834:
	.4byte 0x00000964
_080DE838:
	.4byte 0x00000ED2
_080DE83C:
	.4byte 0x00000EF2
_080DE840:
	.4byte 0x00000965
_080DE844:
	.4byte 0x00001052
_080DE848:
	.4byte gCrystalCount
_080DE84C:
	.4byte 0x00001662
	THUMB_FUNC_END sub_080DE724

