	THUMB_FUNC_START sub_080F185C
sub_080F185C: @ 0x080F185C
	push {r4-r7,lr}
	mov r7, r8
	push {r7}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r4, r0, #24
	ldr r6, _080F18F8  @ =gRam
	ldr r1, _080F18FC  @ =0x00000F52
	add r0, r6, r1
	add r5, r4, r0
	ldrb r2, [r5]
	mov r3, #0
	ldr r0, _080F1900  @ =0x00001663
	add r0, r0, r6
	mov r8, r0
	ldrb r0, [r0]
	mov r1, #0
	cmp r0, #12
	bne _080F1884
	mov r1, #2
_080F1884:
	cmp r1, r2
	beq _080F188A
	mov r3, #1
_080F188A:
	strb r1, [r5]
	cmp r3, #0
	bne _080F18EA
	mov r1, #133
	lsl r1, r1, #1
	add r0, r4, #0
	mov r2, sp
	bl sub_080C9164
	ldr r1, _080F1904  @ =0x00000EE2
	add r0, r6, r1
	add r0, r4, r0
	ldrb r7, [r0]
	add r1, r7, #0
	sub r1, r1, #16
	strb r1, [r0]
	add r0, r4, #0
	bl sub_080C1F70
	ldr r2, _080F1908  @ =0x00000F22
	add r0, r6, r2
	add r0, r4, r0
	mov r1, #1
	strb r1, [r0]
	sub r2, r2, #16
	add r0, r6, r2
	add r0, r4, r0
	strb r1, [r0]
	add r0, r4, #0
	bl sub_080C79D0
	lsl r0, r0, #24
	cmp r0, #0
	bne _080F18E0
	ldrb r0, [r5]
	add r0, r0, #1
	strb r0, [r5]
	mov r1, r8
	ldrb r0, [r1]
	cmp r0, #0
	beq _080F18E0
	mov r0, #5
	strb r0, [r5]
_080F18E0:
	ldr r0, _080F18F8  @ =gRam
	ldr r2, _080F1904  @ =0x00000EE2
	add r0, r0, r2
	add r0, r4, r0
	strb r7, [r0]
_080F18EA:
	add sp, sp, #4
	pop {r3}
	mov r8, r3
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080F18F8:
	.4byte gRam
_080F18FC:
	.4byte 0x00000F52
_080F1900:
	.4byte 0x00001663
_080F1904:
	.4byte 0x00000EE2
_080F1908:
	.4byte 0x00000F22
	THUMB_FUNC_END sub_080F185C

