	THUMB_FUNC_START sub_080C9400
sub_080C9400: @ 0x080C9400
	push {r4-r7,lr}
	lsl r0, r0, #24
	lsr r7, r0, #24
	ldr r6, _080C9460  @ =gRam
	ldr r1, _080C9464  @ =0x00000996
	add r0, r6, r1
	ldrb r1, [r0]
	mov r5, #3
	add r0, r5, #0
	and r0, r0, r1
	cmp r0, #0
	bne _080C947A
	bl GetRandomInt
	ldr r4, _080C9468  @ =gUnknown_08172762
	add r1, r5, #0
	and r1, r1, r0
	lsl r1, r1, #1
	add r1, r1, r4
	ldrh r1, [r1]
	mov r2, #150
	lsl r2, r2, #4
	add r0, r6, r2
	strh r1, [r0]
	bl GetRandomInt
	add r1, r5, #0
	and r1, r1, r0
	lsl r1, r1, #1
	add r1, r1, r4
	ldrh r1, [r1]
	ldr r2, _080C946C  @ =0x00000964
	add r0, r6, r2
	strh r1, [r0]
	mov r1, #29
	ldr r0, _080C9470  @ =0x000011D2
	add r2, r6, r0
_080C944A:
	add r0, r1, r2
	ldrb r0, [r0]
	cmp r0, #0
	bne _080C9474
	lsl r1, r1, #24
	lsr r1, r1, #24
	add r0, r7, #0
	bl sub_080C9330
	b _080C947A
	.byte 0x00
	.byte 0x00
_080C9460:
	.4byte gRam
_080C9464:
	.4byte 0x00000996
_080C9468:
	.4byte gUnknown_08172762
_080C946C:
	.4byte 0x00000964
_080C9470:
	.4byte 0x000011D2
_080C9474:
	sub r1, r1, #1
	cmp r1, #0
	bge _080C944A
_080C947A:
	pop {r4-r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080C9400

