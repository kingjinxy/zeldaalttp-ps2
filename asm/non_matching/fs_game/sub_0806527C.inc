	THUMB_FUNC_START sub_0806527C
sub_0806527C: @ 0x0806527C
	push {r7,lr}
	sub sp, sp, #8
	mov r7, sp
	str r0, [r7]
	mov r0, #95
	mov r1, #1
	mov r2, #0
	bl sub_0804C8A8
	str r0, [r7, #4]
	ldr r0, [r7, #4]
	cmp r0, #0
	beq _08065346
	ldr r1, [r7, #4]
	ldr r0, [r7]
	bl sub_0803D3D0
	ldr r0, [r7]
	ldr r1, [r7, #4]
	str r1, [r0, #88]
	ldr r0, [r7]
	ldrb r1, [r0, #20]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #1
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #20]
	ldr r0, [r7]
	ldrb r1, [r0, #23]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #180
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #23]
	ldr r0, [r7]
	ldrb r1, [r0, #28]
	mov r2, #252
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #1
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #28]
	ldr r0, [r7]
	ldrh r1, [r0, #58]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	ldr r3, _08065350  @ =0x0000FF90
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strh r2, [r0, #58]
	ldr r0, [r7]
	add r1, r0, #0
	add r0, r0, #94
	ldrb r1, [r0]
	mov r2, #3
	orr r1, r1, r2
	add r2, r1, #0
	strb r2, [r0]
	ldr r0, [r7]
	add r1, r0, #0
	add r0, r0, #124
	ldrh r1, [r0]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	ldr r3, _08065354  @ =0x00000901
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strh r2, [r0]
	ldr r0, [r7]
	mov r1, #0
	bl 0x08003870
	ldr r0, [r7]
	bl sub_08065E44
	ldr r0, _08065358  @ =gUnknown_03000450
	ldr r1, [r7]
	str r1, [r0]
	bl sub_0802D970
	bl sub_0802C8E4
	ldr r1, [r7]
	ldrh r0, [r1, #50]
	ldr r1, [r7]
	ldrh r2, [r1, #54]
	add r1, r2, #0
	bl sub_0801624C
_08065346:
	add sp, sp, #8
	pop {r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08065350:
	.4byte 0x0000FF90
_08065354:
	.4byte 0x00000901
_08065358:
	.4byte gUnknown_03000450
	THUMB_FUNC_END sub_0806527C

