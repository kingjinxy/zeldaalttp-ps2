	THUMB_FUNC_START sub_080ADD38
sub_080ADD38: @ 0x080ADD38
	push {r4-r6,lr}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r0, r0, #24
	lsl r1, r1, #24
	lsr r1, r1, #24
	ldr r5, _080ADE54  @ =gRam
	ldr r3, _080ADE58  @ =0x0000175D
	add r4, r5, r3
	strb r2, [r4]
	ldrb r6, [r4]
	mov r2, sp
	bl sub_080AB89C
	lsl r0, r0, #24
	cmp r0, #0
	beq _080ADD5C
	b _080ADF16
_080ADD5C:
	mov r0, sp
	ldrb r1, [r0]
	ldr r0, _080ADE5C  @ =0x00000E29
	add r2, r5, r0
	add r1, r1, r2
	ldr r3, _080ADE60  @ =gUnknown_0816E5D4
	ldrb r0, [r4]
	add r0, r0, r3
	ldrb r0, [r0]
	strb r0, [r1]
	mov r0, sp
	ldrb r0, [r0]
	add r0, r0, r2
	ldrb r1, [r0]
	ldrb r2, [r3]
	cmp r1, r2
	beq _080ADD84
	ldrb r3, [r3, #5]
	cmp r1, r3
	bne _080ADD98
_080ADD84:
	ldr r1, _080ADE64  @ =gUnknown_0816E23C
	ldrb r0, [r0]
	add r0, r0, r1
	ldrb r1, [r0]
	ldr r3, _080ADE68  @ =0x00001732
	add r0, r5, r3
	strb r1, [r0]
	ldrb r0, [r0]
	bl sub_0812FBC4
_080ADD98:
	ldr r4, _080ADE54  @ =gRam
	mov r1, sp
	ldr r2, _080ADE6C  @ =0x00000A88
	add r0, r4, r2
	ldrb r1, [r1]
	add r0, r0, r1
	mov r5, #0
	mov r1, #208
	strb r1, [r0]
	mov r1, sp
	ldr r3, _080ADE70  @ =0x00000DED
	add r0, r4, r3
	ldrb r1, [r1]
	add r0, r0, r1
	strb r5, [r0]
	mov r1, sp
	ldr r2, _080ADE74  @ =0x00000DF7
	add r0, r4, r2
	ldrb r1, [r1]
	add r0, r0, r1
	strb r5, [r0]
	mov r1, sp
	add r3, r3, #50
	add r0, r4, r3
	ldrb r1, [r1]
	add r0, r0, r1
	strb r5, [r0]
	mov r0, sp
	ldr r2, _080ADE78  @ =0x00000A92
	add r1, r4, r2
	ldrb r0, [r0]
	add r1, r1, r0
	ldr r2, _080ADE7C  @ =gUnknown_0816E5DB
	ldr r0, _080ADE58  @ =0x0000175D
	add r3, r4, r0
	ldrb r0, [r3]
	add r0, r0, r2
	ldrb r0, [r0]
	strb r0, [r1]
	mov r1, sp
	ldr r2, _080ADE80  @ =0x00001844
	add r0, r4, r2
	ldrb r1, [r1]
	add r0, r0, r1
	mov r1, #9
	strb r1, [r0]
	mov r1, sp
	sub r2, r2, #18
	add r0, r4, r2
	ldrb r1, [r1]
	add r0, r0, r1
	strb r5, [r0]
	mov r1, sp
	sub r2, r2, #26
	add r0, r4, r2
	ldrb r1, [r1]
	add r0, r0, r1
	strb r5, [r0]
	mov r0, sp
	add r2, r2, #15
	add r1, r4, r2
	ldrb r0, [r0]
	add r1, r1, r0
	ldr r2, _080ADE84  @ =gUnknown_0816E5FE
	ldrb r0, [r3]
	add r0, r0, r2
	ldrb r0, [r0]
	strb r0, [r1]
	mov r1, sp
	ldr r2, _080ADE5C  @ =0x00000E29
	add r0, r4, r2
	ldrb r1, [r1]
	add r0, r0, r1
	ldrb r0, [r0]
	strb r0, [r3]
	cmp r6, #0
	beq _080ADE36
	cmp r6, #5
	bne _080ADE88
_080ADE36:
	mov r3, #182
	lsl r3, r3, #5
	add r0, r4, r3
	ldrh r1, [r0]
	mov r2, #150
	lsl r2, r2, #4
	add r0, r4, r2
	strh r1, [r0]
	add r3, r3, #4
	add r0, r4, r3
	ldrh r1, [r0]
	add r2, r2, #4
	add r0, r4, r2
	strh r1, [r0]
	b _080ADEC6
_080ADE54:
	.4byte gRam
_080ADE58:
	.4byte 0x0000175D
_080ADE5C:
	.4byte 0x00000E29
_080ADE60:
	.4byte gUnknown_0816E5D4
_080ADE64:
	.4byte gUnknown_0816E23C
_080ADE68:
	.4byte 0x00001732
_080ADE6C:
	.4byte 0x00000A88
_080ADE70:
	.4byte 0x00000DED
_080ADE74:
	.4byte 0x00000DF7
_080ADE78:
	.4byte 0x00000A92
_080ADE7C:
	.4byte gUnknown_0816E5DB
_080ADE80:
	.4byte 0x00001844
_080ADE84:
	.4byte gUnknown_0816E5FE
_080ADE88:
	ldr r3, _080ADED0  @ =0x00000AB2
	add r0, r4, r3
	ldrh r0, [r0]
	cmp r0, #20
	bne _080ADEE4
	ldr r1, _080ADED4  @ =0x000016C1
	add r0, r4, r1
	ldrb r1, [r0]
	mov r2, #2
	neg r2, r2
	add r0, r2, #0
	and r0, r0, r1
	add r0, r0, #1
	ldr r3, _080ADED8  @ =0x00000961
	add r1, r4, r3
	strb r0, [r1]
	mov r1, #150
	lsl r1, r1, #4
	add r0, r4, r1
	strb r5, [r0]
	ldr r3, _080ADEDC  @ =0x000016C5
	add r0, r4, r3
	ldrb r0, [r0]
	and r2, r2, r0
	add r2, r2, #1
	add r1, r1, #5
	add r0, r4, r1
	strb r2, [r0]
	ldr r2, _080ADEE0  @ =0x00000964
	add r0, r4, r2
	strb r5, [r0]
_080ADEC6:
	mov r0, sp
	ldrb r0, [r0]
	bl sub_080ABA78
	b _080ADF16
_080ADED0:
	.4byte 0x00000AB2
_080ADED4:
	.4byte 0x000016C1
_080ADED8:
	.4byte 0x00000961
_080ADEDC:
	.4byte 0x000016C5
_080ADEE0:
	.4byte 0x00000964
_080ADEE4:
	ldr r1, _080ADF20  @ =gUnknown_0816E5E2
	lsl r2, r6, #1
	add r1, r2, r1
	ldr r3, _080ADF24  @ =0x00000958
	add r0, r4, r3
	ldrh r0, [r0]
	ldrh r1, [r1]
	add r0, r0, r1
	add r3, r3, #8
	add r1, r4, r3
	strh r0, [r1]
	ldr r0, _080ADF28  @ =gUnknown_0816E5F0
	add r2, r2, r0
	ldr r1, _080ADF2C  @ =0x00000952
	add r0, r4, r1
	ldrh r0, [r0]
	ldrh r2, [r2]
	add r0, r0, r2
	ldr r2, _080ADF30  @ =0x00000964
	add r1, r4, r2
	strh r0, [r1]
	mov r0, sp
	ldrb r0, [r0]
	bl sub_080ABA78
_080ADF16:
	add sp, sp, #4
	pop {r4-r6}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080ADF20:
	.4byte gUnknown_0816E5E2
_080ADF24:
	.4byte 0x00000958
_080ADF28:
	.4byte gUnknown_0816E5F0
_080ADF2C:
	.4byte 0x00000952
_080ADF30:
	.4byte 0x00000964
	THUMB_FUNC_END sub_080ADD38

