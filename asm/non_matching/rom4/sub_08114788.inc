	THUMB_FUNC_START sub_08114788
sub_08114788: @ 0x08114788
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	ldr r6, _081148B0  @ =gRam
	ldr r0, _081148B4  @ =0x00001758
	add r0, r0, r6
	mov r9, r0
_0811479A:
	mov r1, r9
	ldrb r2, [r1]
	ldr r3, _081148B8  @ =gUnknown_0200EBA0
	add r0, r2, r3
	ldrb r0, [r0]
	ldr r7, _081148BC  @ =gUnknown_03002FFE
	strb r0, [r7]
	ldr r1, _081148C0  @ =gUnknown_0200EBB4
	add r0, r2, r1
	ldrb r0, [r0]
	ldr r3, _081148C4  @ =gUnknown_03003012
	strb r0, [r3]
	ldr r7, _081148C8  @ =gUnknown_0200EBC8
	add r0, r2, r7
	ldrb r0, [r0]
	ldr r1, _081148CC  @ =0x00000DD8
	add r5, r6, r1
	strb r0, [r5]
	ldr r3, _081148D0  @ =gUnknown_0200EBDC
	mov r10, r3
	add r0, r2, r3
	ldrb r0, [r0]
	ldr r7, _081148D4  @ =0x00000DEC
	add r4, r6, r7
	strb r0, [r4]
	mov r0, #9
	mov r1, #24
	bl sub_080BF584
	mov r0, #150
	lsl r0, r0, #4
	add r7, r6, r0
	ldrb r1, [r7]
	ldr r2, _081148D8  @ =0x00000DF6
	add r0, r6, r2
	strb r1, [r0]
	ldr r3, _081148DC  @ =0x00000961
	add r3, r3, r6
	mov r8, r3
	ldrb r1, [r3]
	add r2, r2, #10
	add r0, r6, r2
	strb r1, [r0]
	mov r0, #9
	bl sub_080BF774
	mov r0, #9
	bl sub_080C1768
	ldr r0, _081148BC  @ =gUnknown_03002FFE
	ldrb r3, [r0]
	strb r3, [r7]
	ldr r1, _081148C4  @ =gUnknown_03003012
	ldrb r0, [r1]
	mov r2, r8
	strb r0, [r2]
	ldrb r0, [r5]
	ldr r1, _081148E0  @ =0x00000964
	add r5, r6, r1
	strb r0, [r5]
	ldrb r0, [r4]
	ldr r2, _081148E4  @ =0x00000965
	add r4, r6, r2
	strb r0, [r4]
	mov r0, #0
	ldrsh r1, [r5, r0]
	ldr r2, _081148E8  @ =0x000016C4
	add r0, r6, r2
	mov r2, #0
	ldrsh r0, [r0, r2]
	sub r0, r1, r0
	cmp r0, #0
	bge _0811482E
	neg r0, r0
_0811482E:
	lsl r0, r0, #16
	lsr r2, r0, #16
	mov r0, #0
	ldrsh r1, [r7, r0]
	mov r7, #182
	lsl r7, r7, #5
	add r0, r6, r7
	mov r7, #0
	ldrsh r0, [r0, r7]
	sub r0, r1, r0
	cmp r0, #0
	bge _08114848
	neg r0, r0
_08114848:
	lsl r0, r0, #16
	lsr r1, r0, #16
	lsl r0, r2, #16
	asr r0, r0, #16
	cmp r0, #1
	bgt _0811485C
	lsl r0, r1, #16
	asr r0, r0, #16
	cmp r0, #1
	ble _081148F8
_0811485C:
	mov r1, r9
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #18
	beq _081148F8
	ldrb r2, [r1]
	ldr r7, _081148B8  @ =gUnknown_0200EBA0
	add r0, r2, r7
	strb r3, [r0]
	ldr r0, _081148C0  @ =gUnknown_0200EBB4
	add r1, r2, r0
	mov r3, r8
	ldrb r0, [r3]
	strb r0, [r1]
	add r7, r7, #40
	add r1, r2, r7
	ldrb r0, [r5]
	strb r0, [r1]
	mov r0, r10
	add r1, r2, r0
	ldrb r0, [r4]
	strb r0, [r1]
	ldr r1, _081148EC  @ =gUnknown_0200EBF0
	add r0, r2, r1
	mov r3, #0
	strb r3, [r0]
	add r7, r7, #60
	add r2, r2, r7
	ldr r1, _081148F0  @ =gUnknown_0817E9EC
	ldr r3, _081148F4  @ =gUnknown_03002C40
	ldrb r0, [r3]
	add r0, r0, r1
	ldrb r0, [r0]
	lsr r0, r0, #2
	mov r1, #1
	orr r0, r0, r1
	strb r0, [r2]
	b _0811479A
	.byte 0x00
	.byte 0x00
_081148B0:
	.4byte gRam
_081148B4:
	.4byte 0x00001758
_081148B8:
	.4byte gUnknown_0200EBA0
_081148BC:
	.4byte gUnknown_03002FFE
_081148C0:
	.4byte gUnknown_0200EBB4
_081148C4:
	.4byte gUnknown_03003012
_081148C8:
	.4byte gUnknown_0200EBC8
_081148CC:
	.4byte 0x00000DD8
_081148D0:
	.4byte gUnknown_0200EBDC
_081148D4:
	.4byte 0x00000DEC
_081148D8:
	.4byte 0x00000DF6
_081148DC:
	.4byte 0x00000961
_081148E0:
	.4byte 0x00000964
_081148E4:
	.4byte 0x00000965
_081148E8:
	.4byte 0x000016C4
_081148EC:
	.4byte gUnknown_0200EBF0
_081148F0:
	.4byte gUnknown_0817E9EC
_081148F4:
	.4byte gUnknown_03002C40
_081148F8:
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08114788

	.byte 0x00
	.byte 0x00
