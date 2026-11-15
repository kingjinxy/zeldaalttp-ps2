	THUMB_FUNC_START sub_080ACFA8
sub_080ACFA8: @ 0x080ACFA8
	push {r4,r5,lr}
	lsl r0, r0, #24
	lsr r3, r0, #24
	mov r1, #6
	ldr r5, _080ACFC8  @ =gRam
	ldr r2, _080ACFCC  @ =gUnknown_0816E518
_080ACFB4:
	add r0, r1, r2
	ldrb r0, [r0]
	cmp r0, r3
	beq _080ACFD0
	sub r0, r1, #1
	lsl r0, r0, #24
	lsr r1, r0, #24
	cmp r0, #0
	bge _080ACFB4
	b _080ACFF2
_080ACFC8:
	.4byte gRam
_080ACFCC:
	.4byte gUnknown_0816E518
_080ACFD0:
	add r1, r1, #2
	ldr r2, _080AD018  @ =0x00000978
	add r0, r5, r2
	strb r1, [r0]
	mov r1, #0
	ldr r4, _080AD01C  @ =gUnknown_0817276C
_080ACFDC:
	lsl r0, r1, #2
	add r0, r0, r4
	ldr r2, [r0]
	ldrb r0, [r2]
	cmp r0, #1
	bls _080AD024
	add r0, r1, #1
	lsl r0, r0, #24
	lsr r1, r0, #24
	cmp r1, #4
	bne _080ACFDC
_080ACFF2:
	ldr r1, _080AD018  @ =0x00000978
	add r0, r5, r1
	strb r3, [r0]
	mov r1, #5
	ldr r3, _080AD020  @ =gUnknown_0816E51F
	add r4, r0, #0
	mov r2, #0
	ldrsb r2, [r4, r2]
_080AD002:
	add r0, r1, r3
	ldrb r0, [r0]
	cmp r0, r2
	beq _080AD034
	sub r0, r1, #1
	lsl r0, r0, #24
	lsr r1, r0, #24
	cmp r0, #0
	bge _080AD002
	b _080AD052
	.byte 0x00
	.byte 0x00
_080AD018:
	.4byte 0x00000978
_080AD01C:
	.4byte gUnknown_0817276C
_080AD020:
	.4byte gUnknown_0816E51F
_080AD024:
	ldr r1, _080AD030  @ =0x00000978
	add r0, r5, r1
	ldrb r0, [r0]
	strb r0, [r2]
	b _080AD052
	.byte 0x00
	.byte 0x00
_080AD030:
	.4byte 0x00000978
_080AD034:
	add r0, r1, #3
	strb r0, [r4]
	mov r1, #0
	ldr r3, _080AD058  @ =gUnknown_0817276C
_080AD03C:
	lsl r0, r1, #2
	add r0, r0, r3
	ldr r2, [r0]
	ldrb r0, [r2]
	cmp r0, #2
	beq _080AD024
	add r0, r1, #1
	lsl r0, r0, #24
	lsr r1, r0, #24
	cmp r1, #4
	bne _080AD03C
_080AD052:
	pop {r4,r5}
	pop {r0}
	bx r0
_080AD058:
	.4byte gUnknown_0817276C
	THUMB_FUNC_END sub_080ACFA8

