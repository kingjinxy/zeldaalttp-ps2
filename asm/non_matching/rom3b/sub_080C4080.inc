	THUMB_FUNC_START sub_080C4080
sub_080C4080: @ 0x080C4080
	push {r4,r5,lr}
	lsl r0, r0, #24
	lsr r5, r0, #24
	ldr r2, _080C40D0  @ =gRam
	ldr r1, _080C40D4  @ =0x00001032
	add r0, r2, r1
	add r0, r5, r0
	ldrb r1, [r0]
	mov r0, #64
	and r0, r0, r1
	add r4, r2, #0
	cmp r0, #0
	bne _080C4132
	ldr r3, _080C40D8  @ =0x0000143C
	add r0, r4, r3
	add r0, r5, r0
	ldr r1, _080C40DC  @ =0x00001804
	add r2, r4, r1
	ldrb r1, [r2]
	strb r1, [r0]
	ldr r0, _080C40E0  @ =gSword
	ldrb r0, [r0]
	sub r0, r0, #1
	lsl r0, r0, #24
	lsr r3, r0, #24
	ldrb r0, [r2]
	cmp r0, #0
	bne _080C40FA
	ldr r1, _080C40E4  @ =0x000016EA
	add r0, r4, r1
	ldrb r1, [r0]
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #0
	bge _080C40E8
	mov r0, #4
	orr r3, r3, r0
	b _080C40FA
	.byte 0x00
	.byte 0x00
_080C40D0:
	.4byte gRam
_080C40D4:
	.4byte 0x00001032
_080C40D8:
	.4byte 0x0000143C
_080C40DC:
	.4byte 0x00001804
_080C40E0:
	.4byte gSword
_080C40E4:
	.4byte 0x000016EA
_080C40E8:
	add r0, r1, #0
	sub r0, r0, #9
	lsl r0, r0, #24
	cmp r0, #0
	blt _080C40FA
	mov r0, #8
	orr r3, r3, r0
	lsl r0, r3, #24
	lsr r3, r0, #24
_080C40FA:
	add r1, r4, #0
	ldr r0, _080C4138  @ =gUnknown_08171FE8
	add r0, r3, r0
	ldrb r0, [r0]
	ldr r3, _080C413C  @ =0x00000EC5
	add r2, r1, r3
	strb r0, [r2]
	ldr r0, _080C4140  @ =0x0000178A
	add r1, r1, r0
	ldrb r1, [r1]
	mov r0, #10
	and r0, r0, r1
	cmp r0, #0
	beq _080C411A
	mov r0, #3
	strb r0, [r2]
_080C411A:
	ldr r3, _080C4144  @ =0x0000176F
	add r1, r4, r3
	mov r0, #4
	strb r0, [r1]
	ldr r0, _080C4148  @ =0x000016F9
	add r1, r4, r0
	mov r0, #16
	strb r0, [r1]
	add r0, r5, #0
	mov r1, #157
	bl sub_080C523C
_080C4132:
	pop {r4,r5}
	pop {r0}
	bx r0
_080C4138:
	.4byte gUnknown_08171FE8
_080C413C:
	.4byte 0x00000EC5
_080C4140:
	.4byte 0x0000178A
_080C4144:
	.4byte 0x0000176F
_080C4148:
	.4byte 0x000016F9
	THUMB_FUNC_END sub_080C4080

