	THUMB_FUNC_START sub_080D82C0
sub_080D82C0: @ 0x080D82C0
	push {r4,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	ldr r3, _080D8304  @ =gRam
	ldr r0, _080D8308  @ =0x00001052
	add r1, r3, r0
	add r1, r4, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	ldr r1, _080D830C  @ =0x00000F92
	add r2, r3, r1
	add r2, r4, r2
	lsl r0, r0, #24
	lsr r0, r0, #26
	mov r1, #1
	and r0, r0, r1
	strb r0, [r2]
	ldr r0, _080D8310  @ =0x00000996
	add r3, r3, r0
	ldrb r1, [r3]
	add r0, r4, #0
	eor r0, r0, r1
	mov r1, #7
	and r0, r0, r1
	cmp r0, #0
	bne _080D82FE
	add r0, r4, #0
	mov r1, #27
	bl sub_080CF0AC
_080D82FE:
	pop {r4}
	pop {r0}
	bx r0
_080D8304:
	.4byte gRam
_080D8308:
	.4byte 0x00001052
_080D830C:
	.4byte 0x00000F92
_080D8310:
	.4byte 0x00000996
	THUMB_FUNC_END sub_080D82C0

