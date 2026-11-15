	THUMB_FUNC_START sub_0809F4F8
sub_0809F4F8: @ 0x0809F4F8
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	sub sp, sp, #4
	ldr r7, _0809F5E4  @ =gRam
	ldr r0, _0809F5E8  @ =0x00001714
	add r1, r7, r0
	mov r0, #0
	strb r0, [r1]
	bl sub_0809E970
	ldr r1, _0809F5EC  @ =gPlayerFacing
	ldrb r2, [r1]
	mov r3, #182
	lsl r3, r3, #5
	add r1, r7, r3
	ldr r0, _0809F5F0  @ =gUnknown_08168258
	lsr r2, r2, #1
	lsl r2, r2, #1
	add r0, r2, r0
	ldrh r1, [r1]
	ldrh r0, [r0]
	add r0, r1, r0
	ldr r5, _0809F5F4  @ =0x00000A0E
	add r4, r7, r5
	ldrh r3, [r4]
	and r0, r0, r3
	sub r5, r5, #174
	add r5, r5, r7
	mov r9, r5
	strh r0, [r5]
	add r1, r1, #20
	and r1, r1, r3
	ldr r0, _0809F5F8  @ =0x00000968
	add r0, r0, r7
	mov r8, r0
	strh r1, [r0]
	ldr r1, _0809F5FC  @ =0x000016C4
	add r3, r7, r1
	ldr r0, _0809F600  @ =gUnknown_08168260
	add r2, r2, r0
	mov r5, #0
	ldrsh r0, [r3, r5]
	ldrh r2, [r2]
	add r0, r0, r2
	ldrh r1, [r4]
	and r0, r0, r1
	asr r0, r0, #3
	ldr r1, _0809F604  @ =0x00000964
	add r6, r7, r1
	strh r0, [r6]
	mov r2, #0
	ldrsh r0, [r3, r2]
	add r0, r0, #8
	ldrh r1, [r4]
	and r0, r0, r1
	asr r0, r0, #3
	mov r3, #151
	lsl r3, r3, #4
	add r4, r7, r3
	strh r0, [r4]
	ldr r0, _0809F608  @ =0x00000974
	add r5, r7, r0
	mov r1, #1
	mov r10, r1
	mov r2, r10
	strh r2, [r5]
	bl sub_080A0454
	mov r3, r8
	ldrh r0, [r3]
	mov r1, r9
	strh r0, [r1]
	ldrh r0, [r4]
	strh r0, [r6]
	mov r0, #2
	strh r0, [r5]
	bl sub_080A0454
	mov r4, #2
	ldr r2, _0809F60C  @ =0x0000097C
	add r0, r7, r2
	ldr r3, _0809F610  @ =0x000017FF
	add r1, r7, r3
	ldrb r0, [r0]
	ldrb r1, [r1]
	orr r0, r0, r1
	mov r1, #1
	and r0, r0, r1
	cmp r0, #0
	beq _0809F5B4
	mov r4, #3
_0809F5B4:
	ldr r5, _0809F614  @ =0x000009B2
	add r0, r7, r5
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #0
	beq _0809F650
	mov r0, sp
	bl sub_0808176C
	lsl r0, r0, #16
	cmp r0, #0
	beq _0809F620
	ldr r2, _0809F618  @ =gUnknown_0816826F
	mov r0, sp
	ldrh r1, [r0]
	mov r0, #15
	and r0, r0, r1
	add r0, r0, r2
	ldrb r1, [r0]
	ldr r2, _0809F61C  @ =0x000017FA
	add r0, r7, r2
	b _0809F67E
	.byte 0x00
	.byte 0x00
_0809F5E4:
	.4byte gRam
_0809F5E8:
	.4byte 0x00001714
_0809F5EC:
	.4byte gPlayerFacing
_0809F5F0:
	.4byte gUnknown_08168258
_0809F5F4:
	.4byte 0x00000A0E
_0809F5F8:
	.4byte 0x00000968
_0809F5FC:
	.4byte 0x000016C4
_0809F600:
	.4byte gUnknown_08168260
_0809F604:
	.4byte 0x00000964
_0809F608:
	.4byte 0x00000974
_0809F60C:
	.4byte 0x0000097C
_0809F610:
	.4byte 0x000017FF
_0809F614:
	.4byte 0x000009B2
_0809F618:
	.4byte gUnknown_0816826F
_0809F61C:
	.4byte 0x000017FA
_0809F620:
	ldr r3, _0809F644  @ =0x000017F8
	add r0, r7, r3
	ldrh r1, [r0]
	mov r0, r10
	and r0, r0, r1
	cmp r0, #0
	beq _0809F6A6
	ldr r5, _0809F648  @ =gPlayerFacing
	ldrb r0, [r5]
	cmp r0, #0
	bne _0809F6A6
	ldr r1, _0809F64C  @ =0x000017FC
	add r0, r7, r1
	ldrb r0, [r0]
	cmp r0, #0
	bne _0809F6A6
_0809F640:
	mov r4, #4
	b _0809F6A6
_0809F644:
	.4byte 0x000017F8
_0809F648:
	.4byte gPlayerFacing
_0809F64C:
	.4byte 0x000017FC
_0809F650:
	ldr r2, _0809F6BC  @ =0x000017F8
	add r0, r7, r2
	ldrh r1, [r0]
	mov r0, r10
	and r0, r0, r1
	cmp r0, #0
	beq _0809F6A6
	ldr r3, _0809F6C0  @ =gPlayerFacing
	ldrb r0, [r3]
	cmp r0, #0
	bne _0809F670
	ldr r5, _0809F6C4  @ =0x000017FC
	add r0, r7, r5
	ldrb r0, [r0]
	cmp r0, #0
	beq _0809F640
_0809F670:
	ldr r0, _0809F6C8  @ =gRam
	ldr r2, _0809F6C4  @ =0x000017FC
	add r1, r0, r2
	ldrb r1, [r1]
	lsr r1, r1, #1
	ldr r3, _0809F6CC  @ =0x000017FA
	add r0, r0, r3
_0809F67E:
	strh r1, [r0]
	add r2, r1, #0
	ldr r0, _0809F6D0  @ =gUnknown_08168268
	add r0, r2, r0
	ldr r1, _0809F6D4  @ =gGloves
	ldrb r2, [r0]
	ldrb r0, [r1]
	sub r0, r2, r0
	lsl r0, r0, #24
	cmp r0, #0
	bgt _0809F6A6
	mov r4, #1
	sub r0, r2, #1
	lsl r0, r0, #24
	cmp r0, #0
	blt _0809F6A6
	mov r0, #24
	mov r1, #1
	bl sub_080BEA28
_0809F6A6:
	ldr r0, _0809F6C8  @ =gRam
	ldr r5, _0809F6D8  @ =0x00001772
	add r0, r0, r5
	ldrh r1, [r0]
	mov r0, #1
	and r0, r0, r1
	cmp r0, #0
	beq _0809F6DC
	mov r0, #5
	b _0809F6DE
	.byte 0x00
	.byte 0x00
_0809F6BC:
	.4byte 0x000017F8
_0809F6C0:
	.4byte gPlayerFacing
_0809F6C4:
	.4byte 0x000017FC
_0809F6C8:
	.4byte gRam
_0809F6CC:
	.4byte 0x000017FA
_0809F6D0:
	.4byte gUnknown_08168268
_0809F6D4:
	.4byte gGloves
_0809F6D8:
	.4byte 0x00001772
_0809F6DC:
	add r0, r4, #0
_0809F6DE:
	add sp, sp, #4
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r1}
	bx r1
	THUMB_FUNC_END sub_0809F4F8

	.byte 0x00
	.byte 0x00
