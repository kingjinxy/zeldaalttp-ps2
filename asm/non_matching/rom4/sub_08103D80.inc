	THUMB_FUNC_START sub_08103D80
sub_08103D80: @ 0x08103D80
	push {r4-r6,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	ldr r5, _08103DAC  @ =gRam
	ldr r1, _08103DB0  @ =0x00000FC2
	add r0, r5, r1
	add r6, r4, r0
	ldrb r0, [r6]
	cmp r0, #0
	beq _08103DB4
	cmp r0, #16
	bne _08103DE0
	bl GetRandomInt
	mov r1, #1
	and r1, r1, r0
	cmp r1, #0
	bne _08103DE0
	add r0, r4, #0
	bl sub_08103EC8
	b _08103DE0
_08103DAC:
	.4byte gRam
_08103DB0:
	.4byte 0x00000FC2
_08103DB4:
	ldr r2, _08103DE8  @ =0x00000F52
	add r1, r5, r2
	add r1, r4, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	bl GetRandomInt
	mov r1, #31
	and r1, r1, r0
	add r1, r1, #32
	strb r1, [r6]
	ldr r2, _08103DEC  @ =0x00000FB2
	add r0, r5, r2
	add r0, r4, r0
	mov r2, #3
	and r1, r1, r2
	strb r1, [r0]
	ldrb r1, [r0]
	add r0, r4, #0
	bl sub_08103E84
_08103DE0:
	pop {r4-r6}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08103DE8:
	.4byte 0x00000F52
_08103DEC:
	.4byte 0x00000FB2
	THUMB_FUNC_END sub_08103D80

