	THUMB_FUNC_START sub_0800EB50
sub_0800EB50: @ 0x0800EB50
	push {r4,r5,lr}
	add r3, r0, #0
	add r5, r1, #0
	mov r0, #135
	lsl r0, r0, #1
	add r2, r3, r0
	ldrb r1, [r2]
	mov r0, #128
	orr r0, r0, r5
	cmp r1, r0
	beq _0800EBBA
	mov r0, #128
	add r1, r5, #0
	orr r1, r1, r0
	strb r1, [r2]
	ldrb r0, [r3, #27]
	cmp r0, #2
	beq _0800EB98
	ldr r1, _0800EB8C  @ =0x03000030
	lsl r0, r5, #8
	ldr r2, _0800EB90  @ =0x000AE6FC
	add r0, r0, r2
	ldr r1, [r1]
	add r1, r1, r0
	ldr r0, _0800EB94  @ =0x0600D200
	mov r2, #128
	lsl r2, r2, #1
	bl sub_080009F4
	b _0800EBBA
_0800EB8C:
	.4byte 0x03000030
_0800EB90:
	.4byte 0x000AE6FC
_0800EB94:
	.4byte 0x0600D200
_0800EB98:
	ldr r0, _0800EBC0  @ =0x0600CCE0
	ldr r4, _0800EBC4  @ =0x03000030
	ldr r1, [r4]
	ldr r2, _0800EBC8  @ =0x000AEAFC
	add r1, r1, r2
	mov r2, #96
	bl sub_080009F4
	lsl r0, r5, #7
	ldr r1, _0800EBCC  @ =0x000AEB5C
	add r0, r0, r1
	ldr r1, [r4]
	add r1, r1, r0
	ldr r0, _0800EBD0  @ =0x0600CC60
	mov r2, #128
	bl sub_080009F4
_0800EBBA:
	pop {r4,r5}
	pop {r0}
	bx r0
_0800EBC0:
	.4byte 0x0600CCE0
_0800EBC4:
	.4byte 0x03000030
_0800EBC8:
	.4byte 0x000AEAFC
_0800EBCC:
	.4byte 0x000AEB5C
_0800EBD0:
	.4byte 0x0600CC60
	THUMB_FUNC_END sub_0800EB50

