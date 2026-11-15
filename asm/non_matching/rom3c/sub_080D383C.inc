	THUMB_FUNC_START sub_080D383C
sub_080D383C: @ 0x080D383C
	push {r4,r5,lr}
	lsl r0, r0, #24
	lsr r1, r0, #24
	mov r5, #0
	ldr r4, _080D3888  @ =gRam
	ldr r2, _080D388C  @ =0x00000FD2
	add r0, r4, r2
	add r0, r1, r0
	ldrb r0, [r0]
	cmp r0, #0
	bne _080D3880
	ldr r2, _080D3890  @ =0x00000A4E
	add r0, r4, r2
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #14
	bne _080D3880
	add r0, r1, #0
	bl sub_080C500C
	lsl r0, r0, #24
	cmp r0, #0
	beq _080D3880
	ldr r1, _080D3894  @ =0x00001788
	add r0, r4, r1
	ldr r1, [r0]
	ldr r0, _080D3898  @ =0x0002FF00
	and r1, r1, r0
	ldr r0, _080D389C  @ =0x00020200
	mov r5, #1
	cmp r1, r0
	bne _080D3880
	mov r5, #2
_080D3880:
	add r0, r5, #0
	pop {r4,r5}
	pop {r1}
	bx r1
_080D3888:
	.4byte gRam
_080D388C:
	.4byte 0x00000FD2
_080D3890:
	.4byte 0x00000A4E
_080D3894:
	.4byte 0x00001788
_080D3898:
	.4byte 0x0002FF00
_080D389C:
	.4byte 0x00020200
	THUMB_FUNC_END sub_080D383C

