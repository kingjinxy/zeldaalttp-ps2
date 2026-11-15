	THUMB_FUNC_START sub_0807166C
sub_0807166C: @ 0x0807166C
	push {r4-r6,lr}
	bl sub_080AB73C
	ldr r4, _080716C8  @ =gRam
	ldr r0, _080716CC  @ =0x00001718
	add r5, r4, r0
	ldrb r0, [r5]
	cmp r0, #3
	bne _08071682
	mov r0, #0
	strb r0, [r5]
_08071682:
	ldr r1, _080716D0  @ =0x00001804
	add r6, r4, r1
	ldrb r0, [r6]
	cmp r0, #0
	beq _080716C2
	ldr r2, _080716D4  @ =0x00001702
	add r0, r4, r2
	mov r3, #0
	strb r3, [r0]
	ldr r1, _080716D8  @ =0x000016F8
	add r0, r4, r1
	strb r3, [r0]
	sub r2, r2, #51
	add r1, r4, r2
	mov r0, #255
	strb r0, [r1]
	ldr r0, _080716DC  @ =0x0000174C
	add r2, r4, r0
	mov r1, #0
	mov r0, #255
	strh r0, [r2]
	ldr r2, _080716E0  @ =0x000016EB
	add r0, r4, r2
	strb r1, [r0]
	add r2, r2, #46
	add r0, r4, r2
	strb r1, [r0]
	add r2, r2, #159
	add r0, r4, r2
	strh r3, [r0]
	strb r1, [r6]
	strb r1, [r5]
_080716C2:
	pop {r4-r6}
	pop {r0}
	bx r0
_080716C8:
	.4byte gRam
_080716CC:
	.4byte 0x00001718
_080716D0:
	.4byte 0x00001804
_080716D4:
	.4byte 0x00001702
_080716D8:
	.4byte 0x000016F8
_080716DC:
	.4byte 0x0000174C
_080716E0:
	.4byte 0x000016EB
	THUMB_FUNC_END sub_0807166C

