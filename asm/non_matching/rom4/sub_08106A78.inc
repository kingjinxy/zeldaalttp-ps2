	THUMB_FUNC_START sub_08106A78
sub_08106A78: @ 0x08106A78
	push {r4-r6,lr}
	lsl r0, r0, #24
	lsr r2, r0, #24
	add r5, r2, #0
	ldr r3, _08106AD8  @ =gRam
	ldr r1, _08106ADC  @ =0x00000FC2
	add r0, r3, r1
	add r1, r2, r0
	ldrb r4, [r1]
	cmp r4, #0
	bne _08106AD2
	mov r0, #12
	strb r0, [r1]
	ldr r6, _08106AE0  @ =0x00001052
	add r0, r3, r6
	add r1, r2, r0
	ldrb r0, [r1]
	cmp r0, #1
	bne _08106AA6
	sub r6, r6, #176
	add r0, r3, r6
	add r0, r2, r0
	strb r4, [r0]
_08106AA6:
	ldrb r0, [r1]
	sub r0, r0, #1
	strb r0, [r1]
	ldr r0, _08106AE4  @ =0x00001622
	add r1, r3, r0
	ldr r2, _08106AE8  @ =0x00000952
	add r0, r3, r2
	ldrb r0, [r0]
	ldrb r6, [r1]
	add r0, r0, r6
	strb r0, [r1]
	ldr r0, _08106AEC  @ =0x00001624
	add r1, r3, r0
	add r2, r2, #6
	add r0, r3, r2
	ldrb r0, [r0]
	ldrb r6, [r1]
	add r0, r0, r6
	strb r0, [r1]
	add r0, r5, #0
	bl sub_080D9844
_08106AD2:
	pop {r4-r6}
	pop {r0}
	bx r0
_08106AD8:
	.4byte gRam
_08106ADC:
	.4byte 0x00000FC2
_08106AE0:
	.4byte 0x00001052
_08106AE4:
	.4byte 0x00001622
_08106AE8:
	.4byte 0x00000952
_08106AEC:
	.4byte 0x00001624
	THUMB_FUNC_END sub_08106A78

