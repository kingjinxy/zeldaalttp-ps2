	THUMB_FUNC_START sub_080FA014
sub_080FA014: @ 0x080FA014
	push {r4-r7,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	mov r7, #0
	mov r6, #0
	ldr r5, _080FA044  @ =gRam
	ldr r1, _080FA048  @ =0x00000FC2
	add r0, r5, r1
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #0
	beq _080FA09A
	ldr r3, _080FA04C  @ =0x00000996
	add r0, r5, r3
	ldrb r1, [r0]
	add r0, r4, #0
	eor r0, r0, r1
	mov r1, #3
	and r0, r0, r1
	cmp r0, #0
	beq _080FA050
	mov r6, #1
	b _080FA09C
	.byte 0x00
	.byte 0x00
_080FA044:
	.4byte gRam
_080FA048:
	.4byte 0x00000FC2
_080FA04C:
	.4byte 0x00000996
_080FA050:
	add r0, r4, #0
	bl sub_080CA3A0
	ldr r0, _080FA118  @ =0x00000968
	add r2, r5, r0
	ldr r1, _080FA11C  @ =0x00001622
	add r0, r5, r1
	ldrb r1, [r0]
	ldr r3, _080FA120  @ =0x00001623
	add r0, r5, r3
	ldrb r0, [r0]
	lsl r0, r0, #8
	add r1, r1, r0
	ldrh r0, [r2]
	sub r0, r0, r1
	add r0, r0, #5
	lsl r0, r0, #16
	lsr r0, r0, #16
	cmp r0, #9
	bhi _080FA0A2
	ldr r0, _080FA124  @ =0x0000096C
	add r2, r5, r0
	ldr r1, _080FA128  @ =0x00001624
	add r0, r5, r1
	ldrb r1, [r0]
	ldr r3, _080FA12C  @ =0x00001625
	add r0, r5, r3
	ldrb r0, [r0]
	lsl r0, r0, #8
	add r1, r1, r0
	ldrh r0, [r2]
	sub r0, r0, r1
	add r0, r0, #5
	lsl r0, r0, #16
	lsr r0, r0, #16
	cmp r0, #9
	bhi _080FA0A2
_080FA09A:
	mov r7, #1
_080FA09C:
	mov r0, #0
	cmp r0, #0
	beq _080FA0CC
_080FA0A2:
	add r0, r4, #0
	mov r1, #24
	bl sub_080C2DCC
	ldr r2, _080FA130  @ =gRam
	ldr r1, _080FA134  @ =0x00000F12
	add r0, r2, r1
	add r0, r4, r0
	mov r3, #150
	lsl r3, r3, #4
	add r1, r2, r3
	ldrb r1, [r1]
	strb r1, [r0]
	ldr r1, _080FA138  @ =0x00000F22
	add r0, r2, r1
	add r0, r4, r0
	add r3, r3, #1
	add r2, r2, r3
	ldrb r1, [r2]
	strb r1, [r0]
	mov r6, #1
_080FA0CC:
	cmp r6, #0
	beq _080FA0F6
	add r0, r4, #0
	bl Sprite3_Move
	add r0, r4, #0
	bl sub_080C7A48
	lsl r0, r0, #24
	cmp r0, #0
	bne _080FA0FA
	ldr r1, _080FA130  @ =gRam
	ldr r0, _080FA13C  @ =0x00001052
	add r1, r1, r0
	add r1, r4, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	add r0, r4, #0
	bl sub_080FA2E8
_080FA0F6:
	cmp r7, #0
	beq _080FA112
_080FA0FA:
	ldr r2, _080FA130  @ =gRam
	ldr r3, _080FA140  @ =0x00000F52
	add r1, r2, r3
	add r1, r4, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	ldr r0, _080FA144  @ =0x00000FC2
	add r2, r2, r0
	add r2, r4, r2
	mov r0, #32
	strb r0, [r2]
_080FA112:
	pop {r4-r7}
	pop {r0}
	bx r0
_080FA118:
	.4byte 0x00000968
_080FA11C:
	.4byte 0x00001622
_080FA120:
	.4byte 0x00001623
_080FA124:
	.4byte 0x0000096C
_080FA128:
	.4byte 0x00001624
_080FA12C:
	.4byte 0x00001625
_080FA130:
	.4byte gRam
_080FA134:
	.4byte 0x00000F12
_080FA138:
	.4byte 0x00000F22
_080FA13C:
	.4byte 0x00001052
_080FA140:
	.4byte 0x00000F52
_080FA144:
	.4byte 0x00000FC2
	THUMB_FUNC_END sub_080FA014

