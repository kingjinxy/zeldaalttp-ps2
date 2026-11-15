	THUMB_FUNC_START sub_080FD108
sub_080FD108: @ 0x080FD108
	push {r4,r5,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	ldr r2, _080FD14C  @ =gUnknown_020109BA
	ldr r3, _080FD150  @ =gUnknown_0817A772
	ldr r5, _080FD154  @ =gRam
	ldr r1, _080FD158  @ =0x00001082
	add r0, r5, r1
	add r0, r4, r0
	ldrb r1, [r0]
	mov r0, #1
	eor r0, r0, r1
	lsl r0, r0, #1
	add r0, r0, r3
	ldrh r0, [r0]
	ldrh r1, [r2]
	add r0, r0, r1
	strh r0, [r2]
	mov r1, #255
	and r1, r1, r0
	cmp r1, #0
	bne _080FD13C
	ldr r2, _080FD15C  @ =0x00001092
	add r0, r5, r2
	add r0, r4, r0
	strb r1, [r0]
_080FD13C:
	ldr r1, _080FD160  @ =gUnknown_020109B8
	ldrb r0, [r1]
	sub r0, r0, #3
	strb r0, [r1]
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080FD14C:
	.4byte gUnknown_020109BA
_080FD150:
	.4byte gUnknown_0817A772
_080FD154:
	.4byte gRam
_080FD158:
	.4byte 0x00001082
_080FD15C:
	.4byte 0x00001092
_080FD160:
	.4byte gUnknown_020109B8
	THUMB_FUNC_END sub_080FD108

