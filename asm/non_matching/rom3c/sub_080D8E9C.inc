	THUMB_FUNC_START sub_080D8E9C
sub_080D8E9C: @ 0x080D8E9C
	push {r4-r7,lr}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r6, r4, #0
	add r0, r4, #0
	bl sub_080D91B4
	add r0, r4, #0
	bl Sprite3_CheckIfActive
	lsl r0, r0, #24
	cmp r0, #0
	beq _080D8EBA
	b _080D904E
_080D8EBA:
	ldr r5, _080D8FE4  @ =gRam
	ldr r1, _080D8FE8  @ =0x00000F52
	add r0, r5, r1
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #3
	bne _080D8ECA
	b _080D9048
_080D8ECA:
	mov r0, sp
	add r1, r4, #0
	bl sub_080C4948
	mov r2, #7
	ldr r1, _080D8FEC  @ =0x00001022
	add r0, r5, r1
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #2
	bhi _080D8EEE
	ldr r2, _080D8FF0  @ =0x00001052
	add r1, r5, r2
	add r1, r4, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	mov r2, #3
_080D8EEE:
	ldr r1, _080D8FF0  @ =0x00001052
	add r0, r5, r1
	add r0, r4, r0
	ldrb r1, [r0]
	add r1, r1, #1
	strb r1, [r0]
	ldr r0, _080D8FF4  @ =0x00000996
	add r7, r5, r0
	ldrb r0, [r7]
	and r2, r2, r0
	cmp r2, #0
	bne _080D8F0E
	add r0, r4, #0
	mov r1, #101
	bl sub_080CF140
_080D8F0E:
	ldr r1, _080D8FF8  @ =0x00001072
	add r0, r5, r1
	add r2, r4, r0
	ldrb r0, [r2]
	cmp r0, #0
	beq _080D8F1C
	b _080D9028
_080D8F1C:
	ldr r2, _080D8FFC  @ =0x000016F8
	add r7, r5, r2
	ldrb r0, [r7]
	cmp r0, #0
	bne _080D8F6E
	add r0, r4, #0
	bl sub_080C4F98
	lsl r0, r0, #24
	cmp r0, #0
	beq _080D8F6E
	bl sub_08093078
	add r0, r4, #0
	mov r1, #40
	bl sub_080C2CB4
	mov r1, #150
	lsl r1, r1, #4
	add r0, r5, r1
	ldrb r1, [r0]
	ldr r2, _080D9000  @ =0x000016CD
	add r0, r5, r2
	strb r1, [r0]
	ldr r1, _080D9004  @ =0x00000961
	add r0, r5, r1
	ldrb r1, [r0]
	add r2, r2, #1
	add r0, r5, r2
	strb r1, [r0]
	mov r0, #24
	strb r0, [r7]
	ldr r1, _080D9008  @ =0x00000FD2
	add r0, r5, r1
	add r0, r4, r0
	mov r1, #48
	strb r1, [r0]
	add r0, r4, #0
	mov r1, #121
	bl sub_080CF140
_080D8F6E:
	ldr r5, _080D8FE4  @ =gRam
	ldr r2, _080D900C  @ =0x00000FB2
	add r0, r5, r2
	add r4, r6, r0
	ldrb r2, [r4]
	ldr r1, _080D8FEC  @ =0x00001022
	add r0, r5, r1
	add r0, r6, r0
	ldrb r0, [r0]
	cmp r0, #2
	bhi _080D8F8C
	add r0, r2, #0
	add r0, r0, #16
	lsl r0, r0, #24
	lsr r2, r0, #24
_080D8F8C:
	ldr r0, _080D9010  @ =0x00000F22
	add r1, r5, r0
	add r1, r6, r1
	ldr r0, _080D9014  @ =gUnknown_08175840
	add r0, r2, r0
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r0, _080D9018  @ =0x00000F12
	add r1, r5, r0
	add r1, r6, r1
	ldr r0, _080D901C  @ =gUnknown_08175860
	add r0, r2, r0
	ldrb r0, [r0]
	strb r0, [r1]
	add r0, r6, #0
	bl Sprite3_Move
	add r0, r6, #0
	bl sub_080C7A48
	lsl r0, r0, #24
	cmp r0, #0
	beq _080D8FCC
	ldr r0, _080D9020  @ =gUnknown_08175880
	ldrb r1, [r4]
	add r1, r1, r0
	ldrb r0, [r1]
	strb r0, [r4]
	add r0, r6, #0
	mov r1, #13
	bl sub_080CF0AC
_080D8FCC:
	ldr r1, _080D9024  @ =gUnknown_08175890
	ldr r2, _080D8FE8  @ =0x00000F52
	add r0, r5, r2
	add r0, r6, r0
	ldrb r0, [r0]
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r1, [r0]
	add r0, r6, #0
	bl _call_via_r1
	b _080D904E
_080D8FE4:
	.4byte gRam
_080D8FE8:
	.4byte 0x00000F52
_080D8FEC:
	.4byte 0x00001022
_080D8FF0:
	.4byte 0x00001052
_080D8FF4:
	.4byte 0x00000996
_080D8FF8:
	.4byte 0x00001072
_080D8FFC:
	.4byte 0x000016F8
_080D9000:
	.4byte 0x000016CD
_080D9004:
	.4byte 0x00000961
_080D9008:
	.4byte 0x00000FD2
_080D900C:
	.4byte 0x00000FB2
_080D9010:
	.4byte 0x00000F22
_080D9014:
	.4byte gUnknown_08175840
_080D9018:
	.4byte 0x00000F12
_080D901C:
	.4byte gUnknown_08175860
_080D9020:
	.4byte gUnknown_08175880
_080D9024:
	.4byte gUnknown_08175890
_080D9028:
	ldr r1, _080D9044  @ =0x00000FE2
	add r0, r5, r1
	add r0, r4, r0
	mov r1, #64
	strb r1, [r0]
	ldrb r1, [r7]
	mov r0, #3
	and r0, r0, r1
	cmp r0, #0
	bne _080D904E
	ldrb r0, [r2]
	sub r0, r0, #1
	strb r0, [r2]
	b _080D904E
_080D9044:
	.4byte 0x00000FE2
_080D9048:
	add r0, r6, #0
	bl sub_080D9984
_080D904E:
	add sp, sp, #4
	pop {r4-r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080D8E9C

	.byte 0x00
	.byte 0x00
