	THUMB_FUNC_START sub_0812ECDC
sub_0812ECDC: @ 0x0812ECDC
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	ldr r5, _0812EE58  @ =gRam
	ldr r1, _0812EE5C  @ =gUnknown_03002BBE
	mov r0, #0
	ldrsb r0, [r1, r0]
	lsl r0, r0, #2
	ldr r1, _0812EE60  @ =gUnknown_0822B9AC
	add r0, r0, r1
	ldr r0, [r0]
	ldr r4, _0812EE64  @ =gUnknown_02032000
	add r1, r4, #0
	bl LZ77UnCompWram
	ldr r1, _0812EE68  @ =0x06014000
	add r0, r4, #0
	mov r2, #128
	bl CpuFastSet
	ldr r7, _0812EE6C  @ =gUnknown_02032200
	ldr r1, _0812EE70  @ =0x06014400
	add r0, r7, #0
	mov r2, #128
	bl CpuFastSet
	ldr r0, _0812EE74  @ =gUnknown_02032400
	mov r10, r0
	ldr r1, _0812EE78  @ =0x06014800
	mov r2, #128
	bl CpuFastSet
	ldr r1, _0812EE7C  @ =gUnknown_02032600
	mov r9, r1
	ldr r1, _0812EE80  @ =0x06014C00
	mov r0, r9
	mov r2, #128
	bl CpuFastSet
	ldr r0, _0812EE84  @ =gUnknown_0822B324
	mov r8, r0
	ldr r6, _0812EE88  @ =gUnknown_0822B624
	ldr r1, _0812EE8C  @ =0x00000C9B
	add r5, r5, r1
	ldrb r0, [r5]
	lsl r0, r0, #2
	ldr r1, _0812EE90  @ =gUnknown_0822B625
	add r0, r0, r1
	ldrb r0, [r0]
	lsl r0, r0, #2
	add r0, r0, r8
	ldr r0, [r0]
	add r1, r4, #0
	bl LZ77UnCompWram
	ldr r1, _0812EE94  @ =0x06014200
	add r0, r4, #0
	mov r2, #128
	bl CpuFastSet
	ldr r1, _0812EE98  @ =0x06014600
	add r0, r7, #0
	mov r2, #128
	bl CpuFastSet
	ldr r1, _0812EE9C  @ =0x06014A00
	mov r0, r10
	mov r2, #128
	bl CpuFastSet
	ldr r1, _0812EEA0  @ =0x06014E00
	mov r0, r9
	mov r2, #128
	bl CpuFastSet
	ldrb r0, [r5]
	lsl r0, r0, #2
	ldr r1, _0812EEA4  @ =gUnknown_0822B626
	add r0, r0, r1
	ldrb r0, [r0]
	lsl r0, r0, #2
	add r0, r0, r8
	ldr r0, [r0]
	add r1, r4, #0
	bl LZ77UnCompWram
	ldr r1, _0812EEA8  @ =0x06015000
	add r0, r4, #0
	mov r2, #128
	bl CpuFastSet
	ldr r1, _0812EEAC  @ =0x06015400
	add r0, r7, #0
	mov r2, #128
	bl CpuFastSet
	ldr r1, _0812EEB0  @ =0x06015800
	mov r0, r10
	mov r2, #128
	bl CpuFastSet
	ldr r1, _0812EEB4  @ =0x06015C00
	mov r0, r9
	mov r2, #128
	bl CpuFastSet
	ldrb r0, [r5]
	lsl r0, r0, #2
	add r6, r6, #3
	add r0, r0, r6
	ldrb r0, [r0]
	lsl r0, r0, #2
	add r0, r0, r8
	ldr r0, [r0]
	add r1, r4, #0
	bl LZ77UnCompWram
	ldr r1, _0812EEB8  @ =0x06015200
	add r0, r4, #0
	mov r2, #128
	bl CpuFastSet
	ldr r1, _0812EEBC  @ =0x06015600
	add r0, r7, #0
	mov r2, #128
	bl CpuFastSet
	ldr r1, _0812EEC0  @ =0x06015A00
	mov r0, r10
	mov r2, #128
	bl CpuFastSet
	ldr r1, _0812EEC4  @ =0x06015E00
	mov r0, r9
	mov r2, #128
	bl CpuFastSet
	ldr r1, _0812EE5C  @ =gUnknown_03002BBE
	mov r0, #0
	ldrsb r0, [r1, r0]
	lsl r0, r0, #2
	ldr r1, _0812EE60  @ =gUnknown_0822B9AC
	add r0, r0, r1
	ldr r0, [r0]
	ldr r1, _0812EEC8  @ =0x06008000
	bl LZ77UnCompVram
	ldrb r0, [r5]
	lsl r0, r0, #2
	ldr r1, _0812EE90  @ =gUnknown_0822B625
	add r0, r0, r1
	ldrb r0, [r0]
	lsl r0, r0, #2
	add r0, r0, r8
	ldr r0, [r0]
	ldr r1, _0812EECC  @ =0x06008800
	bl LZ77UnCompVram
	ldrb r0, [r5]
	lsl r0, r0, #2
	ldr r1, _0812EEA4  @ =gUnknown_0822B626
	add r0, r0, r1
	ldrb r0, [r0]
	lsl r0, r0, #2
	add r0, r0, r8
	ldr r0, [r0]
	ldr r1, _0812EED0  @ =0x06009000
	bl LZ77UnCompVram
	ldrb r0, [r5]
	lsl r0, r0, #2
	add r0, r0, r6
	ldrb r0, [r0]
	lsl r0, r0, #2
	add r0, r0, r8
	ldr r0, [r0]
	ldr r1, _0812EED4  @ =0x06009800
	bl LZ77UnCompVram
	bl sub_0812FB90
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
_0812EE58:
	.4byte gRam
_0812EE5C:
	.4byte gUnknown_03002BBE
_0812EE60:
	.4byte gUnknown_0822B9AC
_0812EE64:
	.4byte gUnknown_02032000
_0812EE68:
	.4byte 0x06014000
_0812EE6C:
	.4byte gUnknown_02032200
_0812EE70:
	.4byte 0x06014400
_0812EE74:
	.4byte gUnknown_02032400
_0812EE78:
	.4byte 0x06014800
_0812EE7C:
	.4byte gUnknown_02032600
_0812EE80:
	.4byte 0x06014C00
_0812EE84:
	.4byte gUnknown_0822B324
_0812EE88:
	.4byte gUnknown_0822B624
_0812EE8C:
	.4byte 0x00000C9B
_0812EE90:
	.4byte gUnknown_0822B625
_0812EE94:
	.4byte 0x06014200
_0812EE98:
	.4byte 0x06014600
_0812EE9C:
	.4byte 0x06014A00
_0812EEA0:
	.4byte 0x06014E00
_0812EEA4:
	.4byte gUnknown_0822B626
_0812EEA8:
	.4byte 0x06015000
_0812EEAC:
	.4byte 0x06015400
_0812EEB0:
	.4byte 0x06015800
_0812EEB4:
	.4byte 0x06015C00
_0812EEB8:
	.4byte 0x06015200
_0812EEBC:
	.4byte 0x06015600
_0812EEC0:
	.4byte 0x06015A00
_0812EEC4:
	.4byte 0x06015E00
_0812EEC8:
	.4byte 0x06008000
_0812EECC:
	.4byte 0x06008800
_0812EED0:
	.4byte 0x06009000
_0812EED4:
	.4byte 0x06009800
	THUMB_FUNC_END sub_0812ECDC

