	THUMB_FUNC_START sub_080CA754
sub_080CA754: @ 0x080CA754
	push {r4,r5,lr}
	bl GetRandomInt
	mov r1, #1
	and r1, r1, r0
	cmp r1, #0
	bne _080CA7E0
	mov r2, #0
	mov r1, #15
	ldr r5, _080CA7E8  @ =gRam
	ldr r0, _080CA7EC  @ =0x00000FA2
	add r4, r5, r0
	add r0, r0, #80
	add r3, r5, r0
_080CA770:
	add r0, r1, r4
	ldrb r0, [r0]
	cmp r0, #0
	beq _080CA782
	add r0, r1, r3
	ldrb r0, [r0]
	cmp r0, #108
	beq _080CA782
	add r2, r2, #1
_080CA782:
	sub r1, r1, #1
	cmp r1, #0
	bge _080CA770
	cmp r2, #3
	bgt _080CA7E0
	add r4, r5, #0
	ldr r1, _080CA7F0  @ =0x0000165E
	add r0, r4, r1
	ldrb r0, [r0]
	cmp r0, #1
	bls _080CA7E0
	ldr r0, _080CA7F4  @ =0x00000EC9
	add r2, r4, r0
	ldrb r0, [r2]
	add r0, r0, #1
	mov r1, #7
	add r3, r0, #0
	and r3, r3, r1
	strb r0, [r2]
	ldr r1, _080CA7F8  @ =0x0000164C
	add r0, r4, r1
	ldrb r0, [r0]
	cmp r0, #0
	beq _080CA7B6
	mov r0, #8
	orr r3, r3, r0
_080CA7B6:
	ldr r2, _080CA7FC  @ =gUnknown_08172848
	mov r1, #171
	lsl r1, r1, #4
	add r0, r5, r1
	ldrh r0, [r0]
	mov r1, #63
	and r1, r1, r0
	add r1, r1, r2
	ldr r0, _080CA800  @ =gUnknown_08172898
	add r0, r3, r0
	ldrb r1, [r1]
	ldrb r0, [r0]
	and r0, r0, r1
	cmp r0, #0
	bne _080CA7E0
	ldr r0, _080CA804  @ =gUnknown_08172888
	add r0, r3, r0
	ldrb r1, [r0]
	ldr r2, _080CA808  @ =0x00000DB8
	add r0, r5, r2
	strb r1, [r0]
_080CA7E0:
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080CA7E8:
	.4byte gRam
_080CA7EC:
	.4byte 0x00000FA2
_080CA7F0:
	.4byte 0x0000165E
_080CA7F4:
	.4byte 0x00000EC9
_080CA7F8:
	.4byte 0x0000164C
_080CA7FC:
	.4byte gUnknown_08172848
_080CA800:
	.4byte gUnknown_08172898
_080CA804:
	.4byte gUnknown_08172888
_080CA808:
	.4byte 0x00000DB8
	THUMB_FUNC_END sub_080CA754

