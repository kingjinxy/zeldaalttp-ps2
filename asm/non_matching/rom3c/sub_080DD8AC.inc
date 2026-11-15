	THUMB_FUNC_START sub_080DD8AC
sub_080DD8AC: @ 0x080DD8AC
	push {r4,r5,lr}
	add r1, r0, #0
	lsl r1, r1, #24
	lsr r1, r1, #24
	mov r0, #43
	bl sub_080CA538
	add r4, r0, #0
	cmp r4, #0
	blt _080DD91C
	lsl r0, r4, #24
	lsr r0, r0, #24
	bl sub_080CAE50
	ldr r2, _080DD924  @ =gRam
	ldr r0, _080DD928  @ =0x00000964
	add r1, r2, r0
	ldrh r0, [r1]
	add r0, r0, #4
	mov r3, #0
	strh r0, [r1]
	ldr r5, _080DD92C  @ =0x00000ED2
	add r0, r2, r5
	add r0, r4, r0
	ldrb r1, [r1]
	strb r1, [r0]
	ldr r1, _080DD930  @ =0x00000EF2
	add r0, r2, r1
	add r0, r4, r0
	ldr r5, _080DD934  @ =0x00000965
	add r1, r2, r5
	ldrb r1, [r1]
	strb r1, [r0]
	ldr r1, _080DD938  @ =0x00001052
	add r0, r2, r1
	add r0, r4, r0
	mov r1, #3
	strb r1, [r0]
	ldr r5, _080DD93C  @ =0x00001152
	add r0, r2, r5
	add r0, r4, r0
	mov r1, #7
	strb r1, [r0]
	ldr r1, _080DD940  @ =0x00000FC2
	add r0, r2, r1
	add r0, r4, r0
	mov r1, #96
	strb r1, [r0]
	add r5, r5, #32
	add r0, r2, r5
	add r0, r4, r0
	strb r1, [r0]
	ldr r0, _080DD944  @ =0x00001012
	add r2, r2, r0
	add r2, r4, r2
	strb r3, [r2]
_080DD91C:
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080DD924:
	.4byte gRam
_080DD928:
	.4byte 0x00000964
_080DD92C:
	.4byte 0x00000ED2
_080DD930:
	.4byte 0x00000EF2
_080DD934:
	.4byte 0x00000965
_080DD938:
	.4byte 0x00001052
_080DD93C:
	.4byte 0x00001152
_080DD940:
	.4byte 0x00000FC2
_080DD944:
	.4byte 0x00001012
	THUMB_FUNC_END sub_080DD8AC

