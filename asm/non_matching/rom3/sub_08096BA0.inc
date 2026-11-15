	THUMB_FUNC_START sub_08096BA0
sub_08096BA0: @ 0x08096BA0
	push {r4-r6,lr}
	ldr r2, _08096C28  @ =gRam
	ldr r1, _08096C2C  @ =0x0000097C
	add r0, r2, r1
	ldrb r1, [r0]
	mov r0, #7
	and r0, r0, r1
	add r6, r2, #0
	cmp r0, #0
	bne _08096BB6
	b _08096E10
_08096BB6:
	ldr r2, _08096C30  @ =0x00001718
	add r0, r6, r2
	ldrb r0, [r0]
	cmp r0, #4
	bne _08096BD0
	ldr r3, _08096C34  @ =0x0000179C
	add r0, r6, r3
	mov r4, #0
	ldrsh r0, [r0, r4]
	cmp r0, #0
	bne _08096BD0
	bl sub_08092B0C
_08096BD0:
	ldr r6, _08096C28  @ =gRam
	ldr r0, _08096C2C  @ =0x0000097C
	add r5, r6, r0
	ldrb r1, [r5]
	mov r0, #2
	and r0, r0, r1
	cmp r0, #0
	beq _08096BEC
	ldrb r4, [r5]
	bl sub_0809E774
	bl sub_0809E71C
	strb r4, [r5]
_08096BEC:
	ldr r2, _08096C38  @ =0x0000178B
	add r1, r6, r2
	mov r0, #1
	strb r0, [r1]
	ldrb r1, [r5]
	mov r2, #7
	add r0, r2, #0
	and r0, r0, r1
	cmp r0, #7
	bne _08096C44
	ldr r4, _08096C3C  @ =0x000016C4
	add r3, r6, r4
	ldrh r1, [r3]
	and r2, r2, r1
	add r4, r4, #19
	add r0, r6, r4
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #0
	bge _08096C1A
	ldr r0, _08096C40  @ =0x0000FFF8
	orr r2, r2, r0
_08096C1A:
	neg r0, r2
	lsl r0, r0, #16
	lsr r2, r0, #16
	add r0, r2, r1
	strh r0, [r3]
	b _08096C7C
	.byte 0x00
	.byte 0x00
_08096C28:
	.4byte gRam
_08096C2C:
	.4byte 0x0000097C
_08096C30:
	.4byte 0x00001718
_08096C34:
	.4byte 0x0000179C
_08096C38:
	.4byte 0x0000178B
_08096C3C:
	.4byte 0x000016C4
_08096C40:
	.4byte 0x0000FFF8
_08096C44:
	ldr r1, _08096CF0  @ =0x0000172A
	add r0, r6, r1
	ldrb r4, [r0]
	cmp r4, #2
	bne _08096C50
	b _08096E28
_08096C50:
	ldr r3, _08096CF4  @ =0x000016C4
	add r5, r6, r3
	ldrh r3, [r5]
	add r1, r2, #0
	and r1, r1, r3
	ldr r2, _08096CF8  @ =0x000016D7
	add r0, r6, r2
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #0
	bge _08096C6C
	ldr r0, _08096CFC  @ =0x0000FFF8
	orr r1, r1, r0
_08096C6C:
	neg r0, r1
	lsl r0, r0, #16
	lsr r1, r0, #16
	add r0, r1, r3
	strh r0, [r5]
	cmp r4, #1
	bne _08096C7C
	b _08096E28
_08096C7C:
	ldr r1, _08096D00  @ =gRam
	ldr r3, _08096D04  @ =0x0000097C
	add r0, r1, r3
	ldrb r3, [r0]
	mov r0, #5
	and r0, r0, r3
	add r6, r1, #0
	cmp r0, #5
	beq _08096D84
	mov r0, #4
	and r0, r0, r3
	lsl r0, r0, #24
	asr r4, r0, #24
	cmp r4, #0
	beq _08096D1A
	mov r2, #1
	ldr r4, _08096CF8  @ =0x000016D7
	add r0, r6, r4
	ldrb r1, [r0]
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #0
	blt _08096CB4
	neg r0, r1
	lsl r0, r0, #24
	cmp r0, #0
	bge _08096CB6
_08096CB4:
	mov r2, #255
_08096CB6:
	mov r0, #150
	lsl r0, r0, #4
	add r3, r6, r0
	mov r1, #0
	strb r2, [r3]
	ldr r2, _08096D08  @ =0x00000961
	add r0, r6, r2
	strb r1, [r0]
	ldr r4, _08096D04  @ =0x0000097C
	add r0, r6, r4
	ldrb r1, [r0]
	mov r0, #2
	and r0, r0, r1
	cmp r0, #0
	bne _08096D8C
	mov r0, #182
	lsl r0, r0, #5
	add r2, r6, r0
	ldrb r1, [r2]
	mov r0, #7
	and r0, r0, r1
	cmp r0, #0
	beq _08096D10
	ldrh r1, [r3]
	cmp r1, #127
	bls _08096D6C
	ldr r3, _08096D0C  @ =0xFFFFFF00
	add r0, r3, #0
	b _08096D66
_08096CF0:
	.4byte 0x0000172A
_08096CF4:
	.4byte 0x000016C4
_08096CF8:
	.4byte 0x000016D7
_08096CFC:
	.4byte 0x0000FFF8
_08096D00:
	.4byte gRam
_08096D04:
	.4byte 0x0000097C
_08096D08:
	.4byte 0x00000961
_08096D0C:
	.4byte 0xFFFFFF00
_08096D10:
	bl sub_0809E774
	bl sub_0809E71C
	b _08096D8C
_08096D1A:
	mov r2, #1
	ldr r1, _08096D78  @ =0x000016D7
	add r0, r6, r1
	ldrb r1, [r0]
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #0
	bge _08096D36
	neg r0, r1
	lsl r0, r0, #24
	cmp r0, #0
	bge _08096D36
	mov r2, #255
_08096D36:
	mov r0, #150
	lsl r0, r0, #4
	add r5, r6, r0
	strb r2, [r5]
	ldr r1, _08096D7C  @ =0x00000961
	add r0, r6, r1
	strb r4, [r0]
	mov r0, #2
	and r0, r0, r3
	cmp r0, #0
	bne _08096D8C
	mov r3, #182
	lsl r3, r3, #5
	add r2, r6, r3
	ldrb r1, [r2]
	mov r0, #7
	and r0, r0, r1
	cmp r0, #0
	beq _08096D84
	ldrh r1, [r5]
	cmp r1, #127
	bls _08096D6C
	ldr r4, _08096D80  @ =0xFFFFFF00
	add r0, r4, #0
_08096D66:
	orr r1, r1, r0
	lsl r0, r1, #16
	lsr r1, r0, #16
_08096D6C:
	ldrh r0, [r2]
	add r0, r1, r0
	strh r0, [r2]
	bl sub_0809F6F0
	b _08096E3C
_08096D78:
	.4byte 0x000016D7
_08096D7C:
	.4byte 0x00000961
_08096D80:
	.4byte 0xFFFFFF00
_08096D84:
	bl sub_0809E774
	bl sub_0809E71C
_08096D8C:
	ldr r1, _08096DF0  @ =gRam
	ldr r2, _08096DF4  @ =0x00001726
	add r0, r1, r2
	ldrb r0, [r0]
	lsl r0, r0, #1
	ldr r3, _08096DF8  @ =0x000016D5
	add r2, r1, r3
	add r6, r1, #0
	ldrb r2, [r2]
	cmp r0, r2
	bne _08096E28
	ldr r4, _08096DFC  @ =0x000016FA
	add r3, r6, r4
	ldr r0, _08096E00  @ =0x0000179F
	add r2, r6, r0
	ldrb r1, [r2]
	mov r0, #1
	and r0, r0, r1
	lsl r0, r0, #1
	ldrb r1, [r3]
	orr r0, r0, r1
	strb r0, [r3]
	ldr r1, _08096E04  @ =0x000016EA
	add r0, r6, r1
	ldrb r0, [r0]
	cmp r0, #0
	bne _08096DD2
	ldr r4, _08096E08  @ =0x00001803
	add r1, r6, r4
	ldrb r0, [r1]
	sub r0, r0, #1
	strb r0, [r1]
	lsl r0, r0, #24
	cmp r0, #0
	bge _08096E3C
_08096DD2:
	ldrb r2, [r2]
	ldr r1, _08096E0C  @ =0x00001784
	add r0, r6, r1
	ldrh r1, [r0]
	mov r0, #32
	and r0, r0, r1
	cmp r0, #0
	beq _08096DE6
	lsl r0, r2, #27
	lsr r2, r0, #24
_08096DE6:
	ldrb r0, [r3]
	orr r2, r2, r0
	strb r2, [r3]
	b _08096E28
	.byte 0x00
	.byte 0x00
_08096DF0:
	.4byte gRam
_08096DF4:
	.4byte 0x00001726
_08096DF8:
	.4byte 0x000016D5
_08096DFC:
	.4byte 0x000016FA
_08096E00:
	.4byte 0x0000179F
_08096E04:
	.4byte 0x000016EA
_08096E08:
	.4byte 0x00001803
_08096E0C:
	.4byte 0x00001784
_08096E10:
	mov r2, #161
	lsl r2, r2, #4
	add r0, r6, r2
	ldrb r0, [r0]
	cmp r0, #0
	bne _08096E3C
	ldr r3, _08096E44  @ =0x000016FA
	add r2, r6, r3
	ldrb r1, [r2]
	mov r0, #246
	and r0, r0, r1
	strb r0, [r2]
_08096E28:
	ldr r4, _08096E48  @ =0x00001803
	add r1, r6, r4
	mov r0, #32
	strb r0, [r1]
	ldr r0, _08096E44  @ =0x000016FA
	add r2, r6, r0
	ldrb r1, [r2]
	mov r0, #253
	and r0, r0, r1
	strb r0, [r2]
_08096E3C:
	pop {r4-r6}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08096E44:
	.4byte 0x000016FA
_08096E48:
	.4byte 0x00001803
	THUMB_FUNC_END sub_08096BA0

