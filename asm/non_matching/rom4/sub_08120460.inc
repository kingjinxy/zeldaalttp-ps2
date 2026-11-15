	THUMB_FUNC_START sub_08120460
sub_08120460: @ 0x08120460
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r0, r0, #24
	lsl r1, r1, #24
	lsr r1, r1, #24
	mov r2, sp
	bl sub_080BF00C
	lsl r0, r0, #24
	cmp r0, #0
	beq _08120482
	b _08120686
_08120482:
	mov r1, #0
	ldr r5, _081205B0  @ =gUnknown_02006880
	mov r4, #3
	ldr r3, _081205B4  @ =gUnknown_02006890
	mov r2, #0
_0812048C:
	add r0, r1, r5
	strb r4, [r0]
	add r0, r1, r3
	strb r2, [r0]
	add r0, r1, #1
	lsl r0, r0, #24
	lsr r1, r0, #24
	cmp r1, #9
	bls _0812048C
	mov r1, #0
	ldr r5, _081205B8  @ =gUnknown_020069C6
	mov r4, #3
	ldr r3, _081205BC  @ =gUnknown_020069B6
	mov r2, #0
_081204A8:
	add r0, r1, r5
	strb r4, [r0]
	add r0, r1, r3
	strb r2, [r0]
	add r0, r1, #1
	lsl r0, r0, #24
	lsr r1, r0, #24
	cmp r1, #7
	bls _081204A8
	ldr r0, _081205C0  @ =gUnknown_020069B4
	mov r1, #0
	strb r1, [r0]
	ldr r0, _081205C4  @ =gUnknown_02006AD7
	strb r1, [r0]
	ldr r1, _081205C8  @ =gUnknown_02006AD6
	mov r0, #128
	strb r0, [r1]
	ldr r1, _081205CC  @ =gUnknown_020068A0
	mov r0, #16
	strb r0, [r1]
	ldr r4, _081205D0  @ =gRam
	ldr r0, _081205D4  @ =0x00000CA2
	add r1, r4, r0
	mov r5, #0
	mov r0, #11
	strh r0, [r1]
	mov r2, #162
	lsl r2, r2, #4
	add r1, r4, r2
	mov r0, #1
	strh r0, [r1]
	mov r1, sp
	ldr r2, _081205D8  @ =0x00000E1F
	add r0, r4, r2
	ldrb r1, [r1]
	add r0, r0, r1
	strb r5, [r0]
	mov r1, sp
	add r2, r2, #10
	add r0, r4, r2
	ldrb r1, [r1]
	add r0, r0, r1
	strb r5, [r0]
	mov r0, #37
	bl sub_080C1A8C
	ldr r1, _081205DC  @ =gUnknown_020069D7
	ldr r2, _081205E0  @ =0x000016C1
	add r0, r4, r2
	ldrb r0, [r0]
	strb r0, [r1]
	add r1, r1, #128
	add r2, r2, #4
	add r0, r4, r2
	ldrb r0, [r0]
	strb r0, [r1]
	sub r1, r1, #129
	sub r2, r2, #5
	add r0, r4, r2
	ldrb r0, [r0]
	strb r0, [r1]
	add r1, r1, #128
	add r2, r2, #4
	add r0, r4, r2
	ldrb r0, [r0]
	strb r0, [r1]
	mov r6, #0
	ldr r1, _081205E4  @ =0x00001732
	add r0, r4, r1
	strb r5, [r0]
	mov r2, #150
	lsl r2, r2, #4
	add r2, r2, r4
	mov r8, r2
	ldr r1, _081205E8  @ =0x00000968
	add r7, r4, r1
	ldr r2, _081205EC  @ =0x00000969
	add r2, r2, r4
	mov r10, r2
	add r1, r1, #4
	add r1, r1, r4
	mov r9, r1
	add r5, r0, #0
_0812054E:
	ldr r2, _081205F0  @ =gUnknown_020069A4
	add r3, r6, r2
	mov r0, #182
	lsl r0, r0, #5
	add r2, r4, r0
	ldr r0, _081205F4  @ =gUnknown_081801B2
	lsl r1, r6, #1
	add r0, r1, r0
	ldrh r0, [r0]
	ldrh r2, [r2]
	add r0, r0, r2
	strh r0, [r3]
	ldr r2, _081205F8  @ =gUnknown_020069AC
	add r3, r6, r2
	ldr r0, _081205FC  @ =0x000016C4
	add r2, r4, r0
	ldr r0, _08120600  @ =gUnknown_081801BA
	add r1, r1, r0
	ldrh r0, [r1]
	ldrh r2, [r2]
	add r0, r0, r2
	strh r0, [r3]
	mov r1, #151
	lsl r1, r1, #4
	add r0, r4, r1
	mov r1, #16
	strb r1, [r0]
	ldr r0, _08120604  @ =gUnknown_02006AD8
	strb r1, [r0]
	lsr r0, r6, #1
	ldr r2, _081205CC  @ =gUnknown_020068A0
	add r1, r0, r2
	ldrb r1, [r1]
	bl sub_080C06EC
	ldr r1, _08120608  @ =0x00000964
	add r0, r4, r1
	mov r2, #0
	ldrsh r0, [r0, r2]
	cmp r0, #0
	beq _0812060C
	mov r1, r8
	mov r2, #0
	ldrsh r0, [r1, r2]
	neg r0, r0
	lsl r0, r0, #16
	lsr r1, r0, #16
	b _08120610
	.byte 0x00
	.byte 0x00
_081205B0:
	.4byte gUnknown_02006880
_081205B4:
	.4byte gUnknown_02006890
_081205B8:
	.4byte gUnknown_020069C6
_081205BC:
	.4byte gUnknown_020069B6
_081205C0:
	.4byte gUnknown_020069B4
_081205C4:
	.4byte gUnknown_02006AD7
_081205C8:
	.4byte gUnknown_02006AD6
_081205CC:
	.4byte gUnknown_020068A0
_081205D0:
	.4byte gRam
_081205D4:
	.4byte 0x00000CA2
_081205D8:
	.4byte 0x00000E1F
_081205DC:
	.4byte gUnknown_020069D7
_081205E0:
	.4byte 0x000016C1
_081205E4:
	.4byte 0x00001732
_081205E8:
	.4byte 0x00000968
_081205EC:
	.4byte 0x00000969
_081205F0:
	.4byte gUnknown_020069A4
_081205F4:
	.4byte gUnknown_081801B2
_081205F8:
	.4byte gUnknown_020069AC
_081205FC:
	.4byte 0x000016C4
_08120600:
	.4byte gUnknown_081801BA
_08120604:
	.4byte gUnknown_02006AD8
_08120608:
	.4byte 0x00000964
_0812060C:
	mov r0, r8
	ldrh r1, [r0]
_08120610:
	ldr r2, _08120634  @ =gUnknown_020069A4
	add r0, r6, r2
	ldrh r0, [r0]
	add r0, r1, r0
	mov r1, r8
	strh r0, [r1]
	mov r2, r9
	mov r1, #0
	ldrsh r0, [r2, r1]
	cmp r0, #0
	beq _08120638
	mov r2, #0
	ldrsh r0, [r7, r2]
	neg r0, r0
	lsl r0, r0, #16
	lsr r1, r0, #16
	b _0812063A
	.byte 0x00
	.byte 0x00
_08120634:
	.4byte gUnknown_020069A4
_08120638:
	ldrh r1, [r7]
_0812063A:
	ldr r2, _08120698  @ =gUnknown_020069AC
	add r0, r6, r2
	ldrh r0, [r0]
	add r0, r1, r0
	strh r0, [r7]
	ldrb r0, [r5]
	ldr r1, _0812069C  @ =gUnknown_020068A4
	add r0, r0, r1
	mov r2, r8
	ldrb r1, [r2]
	strb r1, [r0]
	ldrb r1, [r5]
	ldr r0, _081206A0  @ =gUnknown_020068E4
	add r1, r1, r0
	ldr r2, _081206A4  @ =0x00000961
	add r0, r4, r2
	ldrb r0, [r0]
	strb r0, [r1]
	ldrb r0, [r5]
	ldr r1, _081206A8  @ =gUnknown_02006924
	add r0, r0, r1
	ldrb r1, [r7]
	strb r1, [r0]
	ldrb r0, [r5]
	ldr r2, _081206AC  @ =gUnknown_02006964
	add r0, r0, r2
	mov r2, r10
	ldrb r1, [r2]
	strb r1, [r0]
	ldrb r0, [r5]
	sub r0, r0, #16
	strb r0, [r5]
	sub r0, r6, #2
	lsl r0, r0, #24
	lsr r6, r0, #24
	cmp r0, #0
	blt _08120686
	b _0812054E
_08120686:
	add sp, sp, #4
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08120698:
	.4byte gUnknown_020069AC
_0812069C:
	.4byte gUnknown_020068A4
_081206A0:
	.4byte gUnknown_020068E4
_081206A4:
	.4byte 0x00000961
_081206A8:
	.4byte gUnknown_02006924
_081206AC:
	.4byte gUnknown_02006964
	THUMB_FUNC_END sub_08120460

