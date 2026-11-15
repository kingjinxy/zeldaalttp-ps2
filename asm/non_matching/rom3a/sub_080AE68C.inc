	THUMB_FUNC_START sub_080AE68C
sub_080AE68C: @ 0x080AE68C
	push {r4,lr}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r0, r0, #24
	lsl r1, r1, #24
	lsr r1, r1, #24
	mov r2, sp
	bl sub_080AB89C
	lsl r0, r0, #24
	asr r3, r0, #24
	cmp r3, #0
	bne _080AE6E6
	ldr r2, _080AE6F0  @ =gRam
	mov r1, sp
	ldr r4, _080AE6F4  @ =0x00000E29
	add r0, r2, r4
	ldrb r1, [r1]
	add r0, r0, r1
	strb r3, [r0]
	mov r1, sp
	ldr r3, _080AE6F8  @ =0x00000E33
	add r0, r2, r3
	ldrb r1, [r1]
	add r0, r0, r1
	mov r1, #12
	strb r1, [r0]
	mov r4, #182
	lsl r4, r4, #5
	add r0, r2, r4
	ldrh r1, [r0]
	mov r3, #150
	lsl r3, r3, #4
	add r0, r2, r3
	strh r1, [r0]
	add r4, r4, #4
	add r0, r2, r4
	ldrh r0, [r0]
	ldr r1, _080AE6FC  @ =0x00000964
	add r2, r2, r1
	strh r0, [r2]
	mov r0, sp
	ldrb r0, [r0]
	bl sub_080ABA78
_080AE6E6:
	add sp, sp, #4
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080AE6F0:
	.4byte gRam
_080AE6F4:
	.4byte 0x00000E29
_080AE6F8:
	.4byte 0x00000E33
_080AE6FC:
	.4byte 0x00000964
	THUMB_FUNC_END sub_080AE68C

