	THUMB_FUNC_START sub_080DAB4C
sub_080DAB4C: @ 0x080DAB4C
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	lsl r0, r0, #24
	lsr r5, r0, #24
	ldr r4, _080DABEC  @ =gRam
	ldr r1, _080DABF0  @ =0x00001092
	add r0, r4, r1
	add r0, r5, r0
	ldrb r0, [r0]
	cmp r0, #0
	bne _080DAC10
	ldr r2, _080DABF4  @ =0x00000FC2
	add r2, r2, r4
	mov r9, r2
	add r0, r5, r2
	ldrb r0, [r0]
	cmp r0, #0
	beq _080DAC08
	cmp r0, #64
	bne _080DAC72
	mov r0, #91
	mov r1, #0
	bl sub_0812A324
	mov r7, #1
	add r6, r4, #0
	ldr r0, _080DABF8  @ =0x00000F52
	add r0, r0, r6
	mov r8, r0
	add r1, r5, #0
	add r1, r1, r8
	mov r10, r1
_080DAB92:
	mov r0, #122
	add r1, r5, #0
	mov r2, #2
	bl sub_080C9AAC
	add r4, r0, #0
	lsl r0, r4, #24
	lsr r0, r0, #24
	bl sub_080CAE50
	ldr r2, _080DABFC  @ =0x00001032
	add r1, r6, r2
	add r1, r4, r1
	ldr r2, _080DAC00  @ =gUnknown_08175BDF
	sub r0, r4, #1
	add r0, r0, r2
	ldrb r2, [r0]
	strb r2, [r1]
	ldr r1, _080DAC04  @ =0x00001122
	add r0, r6, r1
	add r0, r4, r0
	mov r1, #15
	and r1, r1, r2
	strb r1, [r0]
	ldr r2, _080DABF0  @ =0x00001092
	add r0, r6, r2
	add r0, r4, r0
	strb r1, [r0]
	mov r0, r8
	add r1, r4, r0
	mov r2, r10
	ldrb r0, [r2]
	strb r0, [r1]
	add r4, r4, r9
	mov r0, #32
	strb r0, [r4]
	lsl r0, r7, #24
	mov r1, #255
	lsl r1, r1, #24
	add r0, r0, r1
	lsr r7, r0, #24
	cmp r0, #0
	bge _080DAB92
	b _080DAC72
	.byte 0x00
	.byte 0x00
_080DABEC:
	.4byte gRam
_080DABF0:
	.4byte 0x00001092
_080DABF4:
	.4byte 0x00000FC2
_080DABF8:
	.4byte 0x00000F52
_080DABFC:
	.4byte 0x00001032
_080DAC00:
	.4byte gUnknown_08175BDF
_080DAC04:
	.4byte 0x00001122
_080DAC08:
	add r0, r5, #0
	bl sub_080DB59C
	b _080DAC72
_080DAC10:
	ldr r2, _080DAC58  @ =0x00000FC2
	add r0, r4, r2
	add r0, r5, r0
	ldrb r0, [r0]
	cmp r0, #0
	beq _080DAC6C
	ldr r0, _080DAC5C  @ =0x00000F22
	add r1, r4, r0
	add r1, r5, r1
	ldr r2, _080DAC60  @ =gUnknown_08175BE1
	sub r0, r5, #1
	add r0, r0, r2
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r2, _080DAC64  @ =0x00000F12
	add r1, r4, r2
	add r1, r5, r1
	ldrb r0, [r1]
	add r0, r0, #2
	strb r0, [r1]
	add r0, r5, #0
	bl Sprite3_Move
	add r0, r5, #0
	bl sub_080DA318
	add r2, r0, #0
	cmp r2, #0
	blt _080DAC72
	ldr r1, _080DAC68  @ =0x00001122
	add r0, r4, r1
	add r0, r2, r0
	mov r1, #4
	strb r1, [r0]
	b _080DAC72
	.byte 0x00
	.byte 0x00
_080DAC58:
	.4byte 0x00000FC2
_080DAC5C:
	.4byte 0x00000F22
_080DAC60:
	.4byte gUnknown_08175BE1
_080DAC64:
	.4byte 0x00000F12
_080DAC68:
	.4byte 0x00001122
_080DAC6C:
	add r0, r5, #0
	bl sub_080DB59C
_080DAC72:
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080DAB4C

