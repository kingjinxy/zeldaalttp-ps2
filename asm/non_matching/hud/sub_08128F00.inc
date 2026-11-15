	THUMB_FUNC_START sub_08128F00
sub_08128F00: @ 0x08128F00
	push {r4,r5,lr}
	ldr r5, _08128F54  @ =gRam
	ldr r0, _08128F58  @ =0x00001AD5
	add r3, r5, r0
	ldrb r0, [r3]
	mov r2, #12
	and r2, r2, r0
	strb r2, [r3]
	ldr r1, _08128F5C  @ =0x00001AD2
	add r4, r5, r1
	ldrh r0, [r4]
	add r0, r0, #1
	strh r0, [r4]
	ldrh r0, [r4]
	ldr r1, _08128F60  @ =gTextPointer
	add r0, r0, r1
	ldrb r0, [r0]
	mov r1, #15
	and r1, r1, r0
	cmp r1, #7
	beq _08128F46
	lsl r0, r1, #4
	orr r0, r0, r2
	strb r0, [r3]
	ldrb r0, [r3]
	lsl r0, r0, #8
	mov r2, #192
	lsl r2, r2, #1
	add r1, r2, #0
	orr r0, r0, r1
	ldr r2, _08128F64  @ =0x00001ADC
	add r1, r5, r2
	strh r0, [r1]
	bl sub_081291C8
_08128F46:
	ldrh r0, [r4]
	add r0, r0, #1
	strh r0, [r4]
	mov r0, #0
	pop {r4,r5}
	pop {r1}
	bx r1
_08128F54:
	.4byte gRam
_08128F58:
	.4byte 0x00001AD5
_08128F5C:
	.4byte 0x00001AD2
_08128F60:
	.4byte gTextPointer
_08128F64:
	.4byte 0x00001ADC
	THUMB_FUNC_END sub_08128F00

